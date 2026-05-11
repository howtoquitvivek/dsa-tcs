#include<bits/stdc++.h>
using namespace std;

// In Fibonacci, each number is the sum of two preceeding ones.
// 0,1,1,2,3,5,8,13,21,34...

int main(){

    int n;
    cout<<"Get Fibonacci upto: ";
    cin>>n;

    // Edge Case: Fibonacci numbers grow exponentially. N > 90 exceeds 64-bit signed integer limits.
    if(n>90){
        cout<<"Overflow\n";
        return 0;
    }
    
    // Edge Case: Negative count is not possible for sequence length.
    if(n<0){
        cout<<"Negative not allowed\n";
        return 0;
    }

    // Edge Case: Handling N=0 and N=1 explicitly since loop needs at least 2 numbers.
    if(n==0) {cout<<"0\n"; return 0;}
    else if(n==1) {cout<<"1\n"; return 0;}

    long long a=0;
    long long b=1;
    
    cout<<a<<","<<b;

    // Logic: Keep adding previous two numbers. 'c' holds sum. Shift 'a' to 'b' and 'b' to 'c'.
    for(int i=3; i<=n; i++){
        long long c = a+b;
        cout<<","<<c;
        a=b;
        b=c;
    }

    cout<<"\n";
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Recursive Approach (Naive):
   - Logic: `fib(n) = fib(n-1) + fib(n-2)`
   - Time Complexity: O(2^N) - Exponential, very slow due to redundant calculations.
   - Space Complexity: O(N) - Recursion stack.

2. Dynamic Programming (Memoization / Tabulation):
   - Logic: Store intermediate results in an array to avoid redundant calculation.
   - Time Complexity: O(N)
   - Space Complexity: O(N) for array storage.

3. Iterative Space-Optimized (Current approach):
   - Logic: Uses only two variables `a` and `b`.
   - Time Complexity: O(N)
   - Space Complexity: O(1) - Most optimal for generating/printing series.
*/