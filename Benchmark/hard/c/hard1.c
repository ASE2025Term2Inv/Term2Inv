int main() {
    // variable declarations
	int x, y, z, w, p, q;
    z = 0;
    w = 0;
    p = 0;
    q = 0;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    //precondition
	assume(x >= 0 && y >= x);
    assume(z == 0);
    assume(w == 0);
    assume(p == 0);
    assume(q == 0);
    // loop body
	while(w < y) {
		z += x;
		p += z;
		q += p;
		w += 1;
	}
    // post-condition
	assert(q == x * (2*y*y*y + 6*y*y + 4*y) / 12);

	return 0;
}
