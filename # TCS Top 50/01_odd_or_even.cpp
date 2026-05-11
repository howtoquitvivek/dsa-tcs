#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // Logic: If the remainder when divided by 2 is 0, the number is even.
    // Edge Case: 0 % 2 == 0, so 0 is considered Even correctly. Negative numbers are handled naturally by modulo in C++ (-4 % 2 == 0).
    if(n%2==0) cout<<"Even\n";
    else cout<<"Odd\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Bitwise AND Operator:
   - Logic: `if ((n & 1) == 0)` - The least significant bit of any even number is 0.
   - Time Complexity: O(1)
   - Space Complexity: O(1)
   - Advantage: Bitwise operations are generally faster than modulo division.
*/