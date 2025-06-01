//ps4-flow-changed
int main() {
    // variable declarations
    int k, y, x, c, t,flag;
    y = 0;
    x = 0;
    c = 0;
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
            x = y * y * y + x;
        } else {
            c = c + 1;
            y = y + 1;
            t = y * y * y + t;
        }

    }
    
    // post-condition
    assert(4 * x + 4 * t - k * k * k * k - 2 * k * k * k - k * k == 0);
}





