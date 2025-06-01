// ps9
int main() {
    // variable declarations
    int k, y, x, c,t,w,flag;
    y = 0;
    c = 0;
    x = 0;
    t = 0;
    w = 0;
    k = __VERIFIER_nondet_int();
    flag = __VERIFIER_nondet_int();
    // precondition
    assume(k >= 0);
    assume(y == 0);
    assume(x == 0);
    assume(c == 0);
    assume(t == 0);
    assume(w == 0);
    assume(flag == 0);

    // loop body
    while (c < k) {
        if(flag > 0){
            c = c + 1;
            y = y + 1;
            x = y * y * y * y * y * y * y * y + x;
        }
        else if(flag == 0){
            c = c + 1;
            y = y + 1;
            w = y * y * y * y * y * y * y * y + w;
        }
        else{
            c = c + 1;
            y = y + 1;
            t = y * y * y * y * y * y * y * y + t;
        }
 
    }

    assert(0 ==-60*k*k*k*k*k*k*k -45*k*k*k*k*k*k*k*k -20*k*k*k -10*k*k*k*k*k*k*k*k*k + 3*k + 42*k*k*k*k*k + 90*x + 90*t + 90*w);
}
