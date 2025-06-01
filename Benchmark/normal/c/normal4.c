int main(){
    // variable declarations
    int x, y;
    int q, r;
    q = 0;
    r = 0;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    //precondition
    assume(x>0);
    assume(y>0);
    assume(q==0);
    assume(r==0);
    // loop body
    while(x > y * q + r) {
        if (r == y - 1){
            r = 0;
            q += 1;
        }
        r += 1;
    }
    // post-condition
    assert(x == q*y+r||x+1 == q*y + r);
//    assert(x == q*y+r);//fix bug
}
