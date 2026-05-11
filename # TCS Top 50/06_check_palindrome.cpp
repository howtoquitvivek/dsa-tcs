#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int num=n;
    long long rev=0;

    // Logic: Extract last digit and construct reversed number. Same logic as reversing a number.
    // Edge Case: Used `long long` for `rev` to prevent integer overflow while constructing reverse.
    // Edge Case: If `n` is single-digit, `rev` equals `num`, which is correctly a palindrome.
    // Edge Case: If `n` is negative (e.g., -121), the reversed value will be -121 and it will be considered palindrome. Usually, negative numbers are not palindromes due to the `-` sign but mathematically it acts symmetrical here.
    while(n != 0){
        rev = n%10 + rev*10;
        n /= 10;
    }

    if(num == rev) cout<<"Palindrome\n";
    else cout<<"Not a palindrome number\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. String Conversion Approach:
   - Logic: Convert integer to string `s`, maintain two pointers `left=0` and `right=s.length()-1`. Check if `s[left] == s[right]` while moving them towards the center.
   - Time Complexity: O(D) where D is number of digits.
   - Space Complexity: O(D) due to string allocation.
   - Advantage: Makes it easier to handle negative numbers strictly (e.g., "-121" left='-', right='1' -> Not a palindrome).

2. Reverse Number Mathematical Approach (Current):
   - Logic: Generate the completely reversed integer and compare it with the original.
   - Time Complexity: O(D)
   - Space Complexity: O(1)
*/