int main(){
     // variable declarations
     int q,r,t,A,B;
     A =  __VERIFIER_nondet_int();
     B =  __VERIFIER_nondet_int();
     q = 0;
     r = 0;
     t = A;
     //precondition
     assume(q == 0);
     assume(r == 0);
     assume(t == A);
     assume(A >= 0);
     assume(B >= 1);
	 // loop body
     while(t != 0) {
	  if (r + 1 == B) {
	       q = q + 1;
	       r = 0;
	       t = t - 1;
	  }
	  else {
	       r = r + 1;
	       t = t - 1;
	  }
     }
     // post-condition
     assert(q == A / B);
}
