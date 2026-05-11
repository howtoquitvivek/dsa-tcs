#include<bits/stdc++.h>
using namespace std;

// Also known as narcissisitc number, it is equal to the sum of its digit, 
// each raised to the power of number of digits in the number.

// Eg. 153 = 1^3 + 5^3 + 3^3

// Negative numbers are not armstrong

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Edge Case: Negative numbers cannot be Armstrong numbers.
    if(n<0){cout<<"Not\n"; return 0;}

    long places=10;
    int digits=1;

    // Logic: Calculate total number of digits. Keep dividing by powers of 10.
    // Edge Case: 0 is correctly handled because 0/10 == 0, loop won't run, digits remains 1.
    while(n/places != 0){
        places *= 10;
        digits++;
    }

    long arm=0;
    int num = n;

    // Logic: Extract each digit, raise to power of `digits`, and add to `arm`.
    while(n != 0){
        arm += pow(n%10, digits);
        n /= 10;
    }

    if(num == arm) cout<<"Armstrong number.\n";
    else cout<<"Not an armstrong number.\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. String Conversion Approach for Digit Count:
   - Logic: Convert `n` to string using `to_string(n)`. The number of digits is simply `s.length()`. Then iterate over characters, convert back to digit `c - '0'` and add `pow(digit, s.length())` to sum.
   - Time Complexity: O(D) where D is the number of digits.
   - Space Complexity: O(D) to store the string representation.
   - Advantage: Easier to find the length of the number.

2. Iterative Mathematical Approach (Current):
   - Logic: Uses loops and division to count digits and then another loop to calculate the Armstrong sum.
   - Time Complexity: O(D) where D is the number of digits.
   - Space Complexity: O(1)
*/