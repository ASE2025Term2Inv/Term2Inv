int main() {
    
    int n =  __VERIFIER_nondet_int();
    int guess;      
    int prev_guess; 

    assume(n > 2); //if n = 1, guess = 1/2 = 0,  (guess + 1) * (guess + 1) = n = 1 
    assume(n <= 50); //add for avoid overflow
    guess = n / 2;  
    prev_guess = 0; 

    while (guess != prev_guess) {
        prev_guess = guess;
        guess = (guess + n / guess) / 2;  
    }
    
    assert((guess + 1) * (guess + 1) > n);
}
