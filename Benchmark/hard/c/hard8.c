//ps6
int main(){
     // variable declarations
     int k,y,x,c;
 	y = 0;
     c = 0;
     x = 0;
	k = __VERIFIER_nondet_int();
     //precondition
     assume( k>=0 );
     assume( k<=30 );
     assume( y == 0);
     assume( x == 0);
     assume( c == 0);

     // loop body
     while(c < k){
	  c = c + 1 ;
	  y = y + 1;
	  x=y*y*y*y*y+x;
     }

     // post-condition
     assert(-2*(k*k*k*k*k*k) - 6*(k*k*k*k*k) - 5*(k*k*k*k) + (k*k) + 12*x == 0);

}