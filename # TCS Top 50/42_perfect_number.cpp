#include<iostream>
using namespace std;

/* 
    A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.
    For instance, 6 has proper divisors 1, 2, and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number. 
    The next perfect number is 28, because 28 has proper divisors 1, 2, 4 , 7, 14, and 1 + 2 + 4 + 7 + 14 = 28.
*/

int main(){

    int n;
    cout<<"Enter no: ";
    cin>>n;

    // Edge Case: Perfect numbers are defined for positive integers only.
    if(n<=0){cout<<"Invalid input\n"; return 0;}

    int sumDiv=0;

    // Logic: Iterate from 1 up to n-1. Check if `i` divides `n` without remainder. If yes, add to sum.
    for(int i=1; i<n; i++){
        if(n%i == 0){
            sumDiv += i;
        }
    }

    // Logic: If sum of divisors equals the number itself, it is perfect.
    sumDiv == n ? cout<<"Perfect\n" : cout<<"Not perfect\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Optimal Divisor Search up to sqrt(N):
   - Logic: Loop `i` from 1 to `sqrt(N)`. If `N % i == 0`, add `i`. If `i != 1` and `i != N/i`, also add `N / i`.
   - Time Complexity: O(sqrt(N))
   - Space Complexity: O(1)
   - Advantage: Highly optimized, especially for large numbers like 33550336.

2. Euclid-Euler Theorem (For finding perfect numbers, not checking):
   - Logic: If `2^p - 1` is prime (Mersenne prime), then `(2^(p-1)) * (2^p - 1)` is a perfect number.

3. Linear Search (Current):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Easiest to understand.
*/