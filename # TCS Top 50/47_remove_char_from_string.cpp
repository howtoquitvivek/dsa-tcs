#include<iostream>
#include<string>
using namespace std;

int main(){

    string s="";
    string newS="";
    string c="";

    cout<<"Enter string: ";
    // Logic: Uses `getline` to capture spaces in the string.
    getline(cin, s);

    cout<<"Enter char: ";
    cin>>c;

    // Logic: Loops through the original string. Appends characters to a new string only if they don't match the target character.
    // Edge Case: Case-sensitive removal. If target is 'A', 'a' will NOT be removed.
    for(int i=0; i<s.length(); i++){
        if(s[i] != c[0]){
            newS += s[i];
        }
    }

    cout<<"New str: "<<newS<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. In-Place STL Remove Idiom:
   - Logic: `s.erase(remove(s.begin(), s.end(), c[0]), s.end());`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Extremely fast and uses no extra memory, highly idiomatic in C++.

2. In-Place Two Pointer approach:
   - Logic: Maintain a `write_index = 0`. Iterate through string. If `s[i] != target`, `s[write_index++] = s[i]`. Finally `s.resize(write_index)`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)

3. String Building Approach (Current):
   - Time Complexity: O(N) (amortized, assuming string concatenation is optimized).
   - Space Complexity: O(N) for the new string `newS`.
*/