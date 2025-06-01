int main(){
    // variable declarations
    int x,y,q,r;
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
        else{
            r += 1;
        }

    }
    // post-condition
    assert(q == x / y);
    return 0;
}
