int main() {
    
    int a, b;
    a =  __VERIFIER_nondet_int();
    b =  __VERIFIER_nondet_int();
    int product = 0; 
    int i = 0;

    
    assume(a > 0);
    assume(b > 0);

    
    while (i < b) {
        product = product + a;  
        i = i + 1;
    }

    
    
    assert((product * product) == (a * b) * (a * b));  
}
