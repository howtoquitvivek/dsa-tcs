#include<iostream>
using namespace std;

// Handle zero

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Edge Case: `0` mathematically has 1 digit, but the `while(n!=0)` loop would return 0. Handled correctly here.
    if(n == 0){
        cout << "Digits: 1\n";
        return 0;
    }

    int count=0;

    // Logic: Repeatedly divide the number by 10 until it becomes 0, counting each step.
    // Edge Case: Negative numbers are handled naturally. In C++, `-12 / 10` is `-1`, then `0`. Count will be exactly correct.
    while(n!=0){
        n/=10;
        count++;
    }

    cout<<"Digits: "<<count<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Logarithmic Approach (Optimal Math):
   - Logic: `int digits = floor(log10(abs(n))) + 1;` (Make sure to check `n=0` separately).
   - Time Complexity: O(1) (assuming log10 is constant time)
   - Space Complexity: O(1)

2. String Conversion Approach:
   - Logic: Convert `n` to string using `to_string(n)`. Return `s.length()`. Adjust if `s[0] == '-'` for negative numbers.
   - Time Complexity: O(D) where D is number of digits.
   - Space Complexity: O(D)

3. Iterative Division (Current):
   - Time Complexity: O(D)
   - Space Complexity: O(1)
*/