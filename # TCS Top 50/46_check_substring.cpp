#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1="";
    string s2="";
    cout<<"Enter str and substr: ";
    cin>>s1>>s2;

    // Logic: Uses the STL string `find()` method. If the substring is not found, `find()` returns `string::npos`.
    // Edge Case: Case-sensitive search. "hello" won't match "HELLO".
    // Edge Case: `cin >>` will stop reading at the first space, making this approach unsuitable for strings with spaces.
    s1.find(s2) != string::npos ? cout<<"Yes\n" : cout<<"No\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Manual Sliding Window (Brute Force):
   - Logic: Iterate `i` from `0` to `s1.length() - s2.length()`. Check if `s1.substr(i, s2.length()) == s2`.
   - Time Complexity: O(N * M)
   - Space Complexity: O(1)
   
2. KMP Algorithm (Optimal for very large strings):
   - Logic: Precompute an LPS (Longest Prefix Suffix) array for the substring to skip redundant character comparisons.
   - Time Complexity: O(N + M)
   - Space Complexity: O(M)

3. STL `string::find()` (Current):
   - Time Complexity: Varies by implementation, but typically highly optimized.
   - Space Complexity: O(1)
   - Advantage: Simplest and highly reliable.
*/