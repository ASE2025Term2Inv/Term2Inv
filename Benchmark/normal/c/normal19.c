int main() {
	int x;
	x = __VERIFIER_nondet_int();
	assume(x >= 0);
	int y = x * x;

	while(unknown()&&x<46340) {//add for avoid overflow
		x = x + 1;
		y = y + 1;
	}

	assert(y <= x * x);
	return 0;
}


