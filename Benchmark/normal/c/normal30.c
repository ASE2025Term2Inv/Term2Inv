int main() { 
  int x,y,u,v,a,b;
  a = __VERIFIER_nondet_int();
  b = __VERIFIER_nondet_int();
  //pre-condition
  x=a;
  y=b;
  u=b;
  v=0;

  assume(a >= 1);
  assume(b >= 1);

  //loop-body
  while(x>y) {
    x=x-y;
    v=v+u;
  }

  //post-condition
  assert(x*u + y*v == a*b);
}   
