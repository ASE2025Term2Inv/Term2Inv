int main() {
	int x;
	x = __VERIFIER_nondet_int();
	assume(x >= 0 && x <= 10);
	int y = x * x;

	while(x * x <= 1000) {
		x = x + 1;
		y = y + 1;
	}

	assert(y <= 1000);
	return 0;
}


