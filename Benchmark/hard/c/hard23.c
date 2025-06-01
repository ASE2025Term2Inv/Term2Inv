int main() {
    // variable declarations
    int k, y, x, c;
    y = 0;
    c = 0;
    x = 0;
    k = __VERIFIER_nondet_int();
    // precondition
    assume(k >= 0);
    assume(y == 0);
    assume(x == 0);
    assume(c == 0);

    // loop body
    while (c < k) {
        c = c + 1;
        y = y + 1;
        x = y*y*y*y*y*y*y*y*y*y + x;
    }
    assert(0 == -66*x -66*k*k*k*k*k*k*k -33*k*k*k +5*k + 6*k*k*k*k*k*k*k*k*k*k*k + 33*k*k*k*k*k*k*k*k*k*k + 55*k*k*k*k*k*k*k*k*k + 66*k*k*k*k*k);
    return 0;
}
