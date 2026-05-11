#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    // Edge Case: Invalid for negative inputs.
    if(n<0){cout<<"Invalid\n"; return 0;}

    int sum=0;

    // Logic: Outer loop runs from 2 to n. Inner loop checks if `i` is prime by dividing up to `sqrt(i)`.
    // Edge Case: Handles n=0 or 1 correctly (outer loop won't run, sum remains 0).
    for(int i=2; i<=n; i++){
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j == 0){isPrime = false; break;}
        }
        if(isPrime) sum+=i;
    }

    cout<<"Sum: "<<sum<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Sieve of Eratosthenes (Optimal):
   - Logic: Create a boolean array `isPrime` up to N, initialized to true. For each prime `p`, mark multiples of `p` as false. Sum all indices remaining true.
   - Time Complexity: O(N log(log N))
   - Space Complexity: O(N)
   - Advantage: Drastically faster for large N, avoids repeated square root primality checks.

2. Optimized Primality Test (Iterative Check):
   - Logic: Same as current, but skip even numbers completely: check `i=2`, then loop `i` by 2 (3, 5, 7). Divisor loop can also skip evens.
   
3. Iterative Primality Test (Current):
   - Time Complexity: O(N * sqrt(N))
   - Space Complexity: O(1)
*/