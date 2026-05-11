#include<iostream>
#include<string>
using namespace std;

// Handle consecutive spaces

int main(){

    string s;
    cout<<"Enter string: ";
    getline(cin, s);

    // Logic: Loops through string. When a space is encountered, it shifts all subsequent characters left by one position.
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){

            int j = i + 1;

            // Logic: Shifting characters one by one.
            while(j <= s.length()){
                s[j-1] = s[j];
                j++;
            }

            // Logic: Decrement `i` to re-check the current position, in case of consecutive spaces.
            // Edge Case: Perfectly handles consecutive spaces due to `i--`.
            // Edge Case: Empty strings are handled gracefully.
            i--;
        }
    }

    // Edge Case: The string length `s.length()` is not physically reduced by shifting characters. The null terminator `\0` gets shifted, so printing `s` usually works in C++, but the internal `std::string` size remains unchanged.
    cout<<s<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Constructing a New String (Efficient):
   - Logic: Create `string result = "";` and iterate: `if (s[i] != ' ') result += s[i];`
   - Time Complexity: O(N)
   - Space Complexity: O(N) auxiliary space.
   - Advantage: Much faster than shifting elements in place.

2. In-Place with Two Pointers (Optimal):
   - Logic: Keep an `index = 0`. Iterate `i` through string. `if(s[i] != ' ') { s[index] = s[i]; index++; }`. Finally, `s.resize(index)`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Optimal time and space. Fixes the issue of `s.length()` not changing.

3. Shifting Approach (Current):
   - Time Complexity: O(N^2) because each space causes an O(N) shift operation.
   - Space Complexity: O(1)
*/