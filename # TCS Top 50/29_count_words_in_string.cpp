#include<iostream>
#include<string>
using namespace std;

// Handle leading/trailing spaces

int main(){

    string s="";
    cout<<"Enter string: ";
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    // Logic: Iterate through string. Track state using `inWord` flag. Every time we transition from a space to a non-space, we increment `count`.
    for(char x : s){
        if(x != ' ' && !inWord){
            count++;
            inWord = true;
        }
        else if(x == ' '){
            inWord = false;
        }
    }

    // Edge Case: The logic above incorrectly outputs `count+1` at the end. For example, "hello world" -> count becomes 2 during loop. Output prints `2+1 = 3`. This is a bug in the original code, but logic is kept untouched as per instructions.
    // Edge Case: Empty strings or strings with only spaces will print 1 due to `count+1`.
    cout<<"No. of words: "<<count+1<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Stringstream Approach:
   - Logic: `stringstream ss(s); string word; while(ss >> word) count++;`
   - Time Complexity: O(N)
   - Space Complexity: O(N) for stringstream buffer.
   - Advantage: Extremely simple and automatically handles multiple spaces, tabs, and newlines correctly without off-by-one errors.

2. State Machine Approach (Current implementation's intention):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Note: The current code's `count+1` causes an off-by-one error. To fix it, just print `count` directly.
*/