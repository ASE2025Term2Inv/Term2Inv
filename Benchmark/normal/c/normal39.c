//freire1.c
int main(){
     // variable declarations

    int x, a, r;
    a =  __VERIFIER_nondet_int();
     //precondition
    assume(a % 2 == 0);
    assume(a > 0);
    assume(a < 50);//add for avoid overflow
    r = 0;
    x = a / 2;

     // loop body
    while (x > r){
        x = x - r;
        r = r + 1;
    }
     // post-condition
     assert( (r+1) * (r+1) >= a );
}

