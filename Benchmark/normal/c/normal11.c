//geo3
int main(){
     // variable declarations
     int z,k,x,y,c,a;
	 z = __VERIFIER_nondet_int();
	 k = __VERIFIER_nondet_int();
	 a = __VERIFIER_nondet_int();
	 x = a;
	 y = 1;
	 c = 1;
     //precondition
     assume(z>=0);
     assume(z<=10);
     assume(k > 0);
     assume(k<=10);
     assume(x == a);
     assume(y == 1);
     assume(c == 1);

     // loop body
     while (c < k){
	  c = c + 1;
	  x = x*z + a;
	  y = y*z;
     }

     // post-condition
     assert(z*x-x+a-a*z*y == 0);
}

