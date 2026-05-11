#include<iostream>
#include<string>
using namespace std;

// Logic: Modifies the string in-place to be completely lowercase to make the palindrome check case-insensitive.
void toLower(string &s){
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){

    string s;
    cout<<"Enter string: ";
    cin>>s;

    toLower(s);

    string rev="";
    // Logic: Build a reversed version of the string manually by iterating backwards.
    // Edge Case: Empty strings are handled gracefully.
    // Edge Case: Since `cin>>` is used, it will not read spaces, so multi-word palindromes (like "nurses run") won't be checked properly.
    for(int i=s.length()-1; i>=0; i--){
        rev += s[i];
    }

    // Logic: Compare the original lowercase string with its reversed version.
    s==rev ? cout<<"Palindrome\n" : cout<<"Not palindrome\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Two Pointers Approach (Optimal):
   - Logic: Keep `left = 0` and `right = s.length() - 1`. While `left < right`, if `tolower(s[left]) != tolower(s[right])`, return false. Else `left++`, `right--`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Stops early if a mismatch is found, and doesn't require constructing a reversed string.

2. Using Built-in Reverse (Current style but shorter):
   - Logic: `string rev = s; reverse(rev.begin(), rev.end()); if(s == rev)...`
   - Time Complexity: O(N)
   - Space Complexity: O(N)
*/