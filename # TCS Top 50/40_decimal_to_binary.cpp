#include<iostream>
#include<string>
using namespace std;

/*
Adding '0'

'0' is just a constant with value 48. [1 is 49]
If n % 2 is 0:

Copy code
0 + '0'  →  0 + 48  →  48  →  '0'
If n % 2 is 1:

Copy code
1 + '0'  →  1 + 48  →  49  →  '1' 
*/


int main(){

    int n;
    cout<<"Enter a no: ";
    cin>>n;

    // Edge Case: Valid binary representation exists for 0 (which is "0"), but here it's blocked. Negative numbers require 2's complement representation, not supported here.
    if(n<=0){cout<<"Invalid input\n"; return 0;}

    string b="";

    // Logic: Repeatedly take remainder of `n` by 2 (which gives the binary digit) and append it to the FRONT of the string.
    // Then divide `n` by 2 to shift right.
    while(n!=0){
        b = char((n % 2) + '0') + b;
        n /= 2;
    }

    cout<<"Binary: "<<b<<"\n";
    
    return 0; 
}

/*
ALTERNATIVE APPROACHES:
1. Using Bitwise Operators:
   - Logic: `for (int i = 31; i >= 0; i--) { int k = n >> i; if (k & 1) cout << "1"; else cout << "0"; }` (Need to handle leading zeros).
   - Time Complexity: O(32) -> O(1)
   - Space Complexity: O(1)
   - Advantage: Direct bit manipulation is generally faster and naturally handles negatives if doing 32-bit representation.

2. Using Math and Array (Integer return):
   - Logic: Store remainders in an array, then print it in reverse. Or calculate `bin = bin + rem * i` where `i` is multiplied by 10 each loop (Warning: overflows easily).
   
3. String Concatenation (Current):
   - Time Complexity: O(log N)
   - Space Complexity: O(log N) to store the string.
*/