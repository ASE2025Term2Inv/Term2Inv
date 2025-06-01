#!/bin/bash


BASE_PATH="./Benchmark/normal"
SRC_DIR="$BASE_PATH/c"
DST_DIR="$BASE_PATH/c_smt"
DST_DIR1="$BASE_PATH/c_graph"

mkdir -p "$DST_DIR"

for file in $(ls "$SRC_DIR"/normal*.c | sort -t 'd' -k2 -n); do

    filename=$(basename "$file")
    number=$(echo "$filename" | grep -oP '(?<=normal)\d+(?=\.c)')

    echo "🔧 Handle:$filename(Number:$number)"


    docker cp "$SRC_DIR/normal${number}.c" code2inv:/code2inv/clang-fe/file.c


    docker exec code2inv bash -c "
        cd /code2inv/clang-fe/ &&
        ./bin/clang-fe -smt ./file.c > file.c.smt 2>/dev/null
    "
    docker exec code2inv bash -c "
        cd /code2inv/clang-fe/ &&
        ./bin/clang-fe -ssa ./file.c > file.c.json 2>/dev/null
    "

    docker cp code2inv:/code2inv/clang-fe/file.c.smt "$DST_DIR/normal${number}.c_smt"
    docker cp code2inv:/code2inv/clang-fe/file.c.json "$DST_DIR1/normal${number}.c_json"
    echo "✅ Done:normal${number}.c -> normal${number}.c_smt"
done
