//Cauchy-Buniakowsky-Schwarz
int main() {
    // variable declarations
	int x, y, z, w, p, n;
	z = 0;
    w = 0;
    p = 0;
	x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    n = __VERIFIER_nondet_int();
    //precondition
	assume(x >= 0);
	assume(y >= 0);
	assume(n >= 0);
    assume(z == 0);
    assume(w == 0);
    assume(p == 0);
    // loop body
	while(n > 0) {
		z = z + x * x;
		w = w + y * y;
		p = p + x * y;
		n -= 1;
	}
    // post-condition
	assert(z * w >= p * p);
}
