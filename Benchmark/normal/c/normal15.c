//ps2
int main(){
     // variable declarations
     int k,y,x,c;
     k =  __VERIFIER_nondet_int();
     x = 0;
     y = 0;
     c = 0;
     //precondition
     assume(y == 0);
     assume(x == 0);
     assume(c == 0);
     assume(k >= 0);
     assume(k <= 30);

     // loop body
     while(c < k){
	  c = c + 1;
	  y = y + 1;
	  x = y + x;
     }

     // post-condition
     assert(2 * x - k * k - k == 0);
}


