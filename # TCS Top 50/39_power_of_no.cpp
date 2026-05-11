#include<iostream>
#include<vector>

using namespace std;

// Handle negative

int main(){

    int x, n;
    cout<<"Enter base and power: ";
    cin>>x>>n;

    // Edge Case: Fractional powers or negative powers are not supported in this simple integer loop.
    if(n < 0){
        cout << "Negative powers not supported\n";
        return 0;
    }

    // Logic: Used `long long` to prevent integer overflow as exponents grow exponentially.
    long long res=1;

    // Logic: Multiply base `x` to `res` exactly `n` times.
    // Edge Case: If n=0, the loop never runs, res remains 1, which correctly represents x^0 = 1.
    for(int i=0; i<n; i++){
        res *= x;
    }

    cout<<"Result: "<<res<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. STL pow():
   - Logic: `double result = pow(x, n);`
   - Time Complexity: O(1) depending on hardware support.
   - Space Complexity: O(1)
   - Note: `pow()` returns a double, which can have precision issues for very large integers.

2. Binary Exponentiation (Optimal for Time):
   - Logic: `while(n > 0) { if(n % 2 == 1) res *= x; x *= x; n /= 2; }`
   - Time Complexity: O(log N)
   - Space Complexity: O(1)
   - Advantage: Much faster than multiplying `n` times, especially for very large `n`.

3. Iterative Multiplication (Current):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
*/