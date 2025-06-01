int main() {
	int x, z, w;
	x = __VERIFIER_nondet_int();
	w = __VERIFIER_nondet_int();
	z = w * x;

	while(unknown())
	{
		w = w * x;
		z = z * x;
	}

	assert(z == w * x);
	return 0;
}
