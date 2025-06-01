




int main() {
	int x;
	int y;
	x = __VERIFIER_nondet_int();
	y = __VERIFIER_nondet_int();
	assume(x >= 0 && y >= 0);

	int z = x * y;

	while(x > 0) {
		x = x - 1;
		z = z - y;
	}

	assert(z == 0);
	return 0;
}
