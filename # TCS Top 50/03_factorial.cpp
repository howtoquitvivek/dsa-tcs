#include<bits/stdc++.h>
using namespace std;

// Fac of 0 is 1
// Fac of negative integers is undefined

// Use long long - upto fac 20
// Use int - upto fac 11
// limit input > 20

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    long long result = 1;

    // Edge Case: Factorial of negative numbers is undefined.
    if(n<0){
        cout<<"Undefined\n";
        return 0;
    }

    // Edge Case: Factorial grows very fast, n > 20 causes integer overflow for 64-bit long long.
    if(n > 20){
        cout << "Overflow\n";
        return 0;
    }

    // Logic: Multiply all numbers from 1 to n. For n=0, the loop won't execute, and result remains 1.
    for(int i=1; i<=n; i++){
        result *= i;
    }

    cout<<"Factorial: "<<result<<"\n";
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Recursive Approach:
   - Logic: `if (n == 0) return 1; else return n * factorial(n - 1);`
   - Time Complexity: O(N)
   - Space Complexity: O(N) (due to call stack space, can cause Stack Overflow for very large N if unbounded)
   
2. Iterative Approach (Current):
   - Logic: Maintained an accumulator `result`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
*/