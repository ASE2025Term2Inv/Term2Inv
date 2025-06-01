//ps7-flow-changed
int main() {
    // variable declarations
    int k, y, x, c, t,flag;
    y = 0;
    c = 0;
    x = 0;
    t = 0;
    k = __VERIFIER_nondet_int();
    flag = __VERIFIER_nondet_int();
    //precondition
    assume(k >= 0);
    assume(k <= 30);
    assume(y == 0);
    assume(x == 0);
    assume(c == 0);
    assume(t == 0);
    
    // loop body
    while (c < k) {
        if (flag < 0) {
            c = c + 1;
            y = y + 1;
            x = y * y * y * y * y * y + x;
        } else {
            c = c + 1;
            y = y + 1;
            t = y * y * y * y * y * y + t;
        }

    }

    // post-condition
    assert(0 == k - 42 * x - 42 * t - 7 * k * k * k + 6 * k * k * k * k * k * k * k + 21 * k * k * k * k * k + 21 * k * k * k * k * k * k);

}
