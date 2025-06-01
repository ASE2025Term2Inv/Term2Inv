// ps8
int main() {
    // variable declarations
    int k, y, x, c, t, w,flag;
    y = 0;
    c = 0;
    x = 0;
    t = 0;
    w = 0;
    k = __VERIFIER_nondet_int();
    flag = __VERIFIER_nondet_int();
    //precondition
    assume(k >= 0);
    assume(k <= 30);
    assume(y == 0);
    assume(x == 0);
    assume(c == 0);
    assume(t == 0);
    assume(w == 0);

    // loop body
    while (c < k) {
        if (flag < 0) {
            c = c + 1;
            y = y + 1;
            x = y * y * y * y * y * y * y + x;
        } else if (flag == 0) {
            c = c + 1;
            y = y + 1;
            t = y * y * y * y * y * y * y + t;
        } else {
            c = c + 1;
            y = y + 1;
            w = y * y * y * y * y * y * y + w;
        }

    }

    assert(0 == - 14 * k * k * k * k * k * k -12 * k * k * k * k * k * k * k - 3 * k * k * k * k * k * k * k * k - 2 * k * k + 7 * k * k * k * k + 24 * x + 24 * t + 24 * w);
}
