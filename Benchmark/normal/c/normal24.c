int main() {
	int x, y, z, w;
	z = 0;
	w = 0;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
	assume(x >= 0 && y >= x);
	while(w < y) {
		z += x;
		w += 1;
	}

	assert(z == x * y);

	return 0;
}
