#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Edge Case: Handle negative numbers or explicitly declare invalid. Sum of digits is usually absolute, but here it's blocked.
    if(n<0){cout<<"Invalid input\n"; return 0;}

    long long sum=0;

    // Logic: Extract the last digit using `% 10` and add to `sum`. Remove last digit using `/ 10`.
    // Edge Case: If `n == 0`, loop condition `n!=0` breaks immediately and sum remains 0, which is correct.
    while(n!=0){
        sum += n%10;
        n /= 10;
    }

    cout<<"Sum of digits is: "<<sum<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. String Conversion Approach:
   - Logic: Convert number to string `to_string(n)`. Iterate through each character `c` in string, converting it to digit using `c - '0'` and add to sum.
   - Time Complexity: O(D) where D is number of digits.
   - Space Complexity: O(D) for string allocation.

2. Recursive Approach:
   - Logic: `int sumOfDigits(int n) { if(n == 0) return 0; return (n % 10) + sumOfDigits(n / 10); }`
   - Time Complexity: O(D)
   - Space Complexity: O(D) for recursive call stack.

3. Iterative Mathematical Approach (Current):
   - Time Complexity: O(D)
   - Space Complexity: O(1) - Best approach.
*/