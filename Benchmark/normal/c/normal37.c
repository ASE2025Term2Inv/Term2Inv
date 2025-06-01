/*
  Bresenham's line drawing algorithm 
  from Srivastava et al.'s paper From Program Verification to Program Synthesis in POPL '10 
*/
int main() {
    
    int X, Y;
    int v, x, y;
    X =  __VERIFIER_nondet_int();
    Y =  __VERIFIER_nondet_int();
    assume(X > 0);
    assume(Y > 0);
    assume(X >= Y);
    v = 2 * Y - X;
    y = 0;
    x = 0;


    
    while (x <= X) {
        if (v < 0) {
            v = v + 2 * Y;
        } else {
            v = v + 2 * (Y - X);
            y++;
        }
        x++;

    }

    
    assert(2*Y*x - 2*x*y - X + 2*Y - v + 2*y == 0);
}
