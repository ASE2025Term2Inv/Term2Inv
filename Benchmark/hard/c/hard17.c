// ps9
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
        x = y * y * y * y * y * y * y * y + x; 
    }

    assert(0 ==-60*k*k*k*k*k*k*k -45*k*k*k*k*k*k*k*k -20*k*k*k -10*k*k*k*k*k*k*k*k*k + 3*k + 42*k*k*k*k*k + 90*x);
}
