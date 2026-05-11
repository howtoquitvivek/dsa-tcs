#include<iostream>
#include<cmath>
using namespace std;

// A prime number is a no. which has only two distinct positive divsors: 1 and itself.
// A compostite no. is a natural number greater than 1, which has two positive divsors.
// Hence 1 is niether a Prime nor a Composite number,

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    bool isPrime = true;
    
    // Edge Case: Numbers <= 1 (including negative numbers and 0) are not prime.
    if(n<=1) isPrime = false;
    
    // Logic: Check divisibility from 2 up to the square root of n. 
    // If a number has a factor greater than its square root, it must also have a factor smaller than it.
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){isPrime = false; break;}
    }

    if(isPrime) cout<<"Prime number\n";
    else cout<<"Not a prime number\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Brute Force (Iterating up to n-1):
   - Logic: Loop from `i=2` to `n-1` and check if `n % i == 0`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   
2. Optimal Approach (Iterating up to sqrt(n) - Current approach):
   - Logic: Factors appear in pairs. If `n = a * b`, then at least one of `a` or `b` must be <= `sqrt(n)`.
   - Time Complexity: O(sqrt(N))
   - Space Complexity: O(1)
*/