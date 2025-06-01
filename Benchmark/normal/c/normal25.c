int main() {
    // variable declarations
	int x, y, z, w, p;
    z = 0;
    w = 0;
    p = 0;
	x = __VERIFIER_nondet_int();
	y = __VERIFIER_nondet_int();
    //precondition
	assume(x >= 0 && y >= x);
    assume(z == 0);
    assume(w == 0);
    assume(p == 0);
    // loop body
	while(w < y) {
		z += x;
		p += z;
		w += 1;
	}
    // post-condition
	assert(p == x * (1 + y) * y / 2);

	return 0;
}
