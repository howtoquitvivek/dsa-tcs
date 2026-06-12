#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Problem:
// Given a string containing only (), {}, []
// determine whether the parentheses are balanced.
//
// Approach:
//
// 1. Create an empty stack.
// 2. Traverse the string character by character.
//
// 3. If the current character is an opening bracket:
//        (  {  [
//    push it into the stack.
//
// 4. If the current character is a closing bracket:
//        )  }  ]
//
//    a. If the stack is empty,
//       there is no matching opening bracket.
//       Return false.
//
//    b. Check the top of the stack.
//       If it matches the corresponding opening bracket,
//       pop the stack.
//       Otherwise return false.
//
// 5. After processing the entire string:
//
//    a. If the stack is empty,
//       every opening bracket found its match.
//       Return true.
//
//    b. Otherwise some opening brackets remain unmatched.
//       Return false.
//
// Example:
//
// Input : "({[]})"
//
// Push '('
// Push '{'
// Push '['
//
// ']' matches '[' -> pop
// '}' matches '{' -> pop
// ')' matches '(' -> pop
//
// Stack becomes empty
//
// Output : Valid (true)

bool isValidParentheses(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    
    return st.empty();
}

int main() {
    string test1 = "()[]{}";
    string test2 = "(]";
    
    cout << "Is \"" << test1 << "\" valid? " << (isValidParentheses(test1) ? "Yes" : "No") << endl;
    cout << "Is \"" << test2 << "\" valid? " << (isValidParentheses(test2) ? "Yes" : "No") << endl;
    
    return 0;
}
