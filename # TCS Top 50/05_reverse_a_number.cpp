#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Logic: Extract the last digit using modulo 10, append it to `rev` by multiplying `rev` by 10, and shrink `n` using integer division by 10.
    // Edge Case: For single digit numbers, loop runs once and safely returns it.
    // Edge Case: Reversing large integers can cause overflow, hence `rev` is taken as `long long`.
    long long rev=0;
    while(n != 0){
        rev = n%10 + rev*10;
        n /= 10;
    }

    cout<<"Ouput: "<<rev<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. String Conversion Approach:
   - Logic: Convert the integer to a string (using `to_string`), use `std::reverse(str.begin(), str.end())`, and convert back using `stoi` or `stoll`.
   - Time Complexity: O(D) where D is number of digits.
   - Space Complexity: O(D) for storing the string.
   - Note: Needs manual handling if the number is negative to keep the `-` sign intact at the front.

2. Iterative Mathematical Approach (Current):
   - Logic: Reversing mathematically using `%` and `/`.
   - Time Complexity: O(D) where D is number of digits.
   - Space Complexity: O(1) - Most optimal space wise. Note that in C++, `n % 10` for negative `n` yields a negative remainder, so negative numbers are properly reversed (e.g., -123 becomes -321).
*/