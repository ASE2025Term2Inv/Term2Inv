# Term2Inv
The Artifact of **LLM Promoted Efficient Inference of Nonlinear Loop Invariants via Template Synthesis**  
Term2Inv is a tool for nonlinear loop invariants inference using large language models (LLMs), built upon the open-source projects [c-convertor](https://github.com/psy054duck/c_convertor) and [Clause2Inv](https://github.com/SoftWiser-group/Clause2Inv).



## Getting Started

### 1. Preparation

Due to GitHub’s file size limitations, all Term2Inv binaries are hosted via Zenodo:  
[https://zenodo.org/records/15568543](https://zenodo.org/records/15568543)

You can obtain and extract the Term2Inv by running:

```bash
./download.sh
```

All necessary dependencies are included—no additional setup is required to run Term2Inv on Ubuntu 22.04.

---

### 2. Configuration

Before running Term2Inv, edit `config.json` to set your LLM API credentials:

```json
{
  "api_key": "YOUR_API_KEY_HERE",
  "base_url": "YOUR_LLM_BASE_URL_HERE"
}
```

---

### 3. Running Term2Inv

#### Batch Mode

To run Term2Inv on all benchmarks of a given category with a specific LLM model:

```bash
cd ./TermInv
python ./run_llm.py <category> <model>
```

Example:

```bash
python ./run_llm.py hard gpt-4o-mini
```

- Results are saved to the `./log` directory.
Note: Only the following models are supported: gpt-3.5, gpt-4o, gpt-4o-mini, and o3-mini.
#### Single Benchmark

To run a single benchmark and output results directly to the terminal:

```bash
./run_inv_llm.sh <id> <category> <model>
```

Example:

```bash
./run_inv_llm.sh 1 hard gpt-4o-mini
```

---

## Benchmarks

- Benchmarks follow the [Code2Inv](https://github.com/PL-ML/code2inv) format.

- Two helper scripts are provided for benchmark preparation:

  - Generate benchmarks from C source files in `./Benchmark/hard/c/*.c`:

    ```bash
    ./create_hard_benchmark.sh
    ```

  - Generate benchmarks from C source files in `./Benchmark/normal/c/*.c`:

    ```bash
    ./create_normal_benchmark.sh
    ```

- These scripts will generate the corresponding SMT files and CFG JSON files required by Term2Inv.

---

## Acknowledgements

- [c-convertor](https://github.com/psy054duck/c_convertor)
- [Clause2Inv](https://github.com/SoftWiser-group/Clause2Inv)
- [Code2Inv](https://github.com/PL-ML/code2inv)

 