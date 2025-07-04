//egcd.c
int main(){
    // variable declarations
    int a,b,p,q,r,s;
    int x, y;
    p = 1;
    q = 0;
    r = 0;
    s = 1;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    a = x;
    b = y;
    //precondition
    assume(x >= 1);
    assume(y >= 1);
    assume(a == x);
    assume(b == y);
    assume(p == 1);
    assume(q == 0);
    assume(r == 0);
    assume(s == 1);

    // loop body
    while(a!=b){
        if (a>b) {
           a = a-b;
           p = p-q;
           r = r-s;
        }
        else {
           b = b-a;
           q = q-p;
           s = s-r;
        }
    }
    // post-condition
    assert(a == y*r + x*p);
}

