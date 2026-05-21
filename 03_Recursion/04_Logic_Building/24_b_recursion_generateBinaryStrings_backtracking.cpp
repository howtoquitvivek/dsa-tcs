/*
========================================================
            GENERATE ALL BINARY STRINGS
========================================================

Problem Statement:
Given an integer n, generate all possible binary
strings of length n.

A binary string consists only of:
- '0'
- '1'

Print all binary strings in any order.

========================================================
                EXAMPLES
========================================================

Input:
n = 2

Output:
00
01
10
11

--------------------------------------------------------

Input:
n = 3

Output:
000
001
010
011
100
101
110
111

========================================================
                EXPLANATION
========================================================

For every position we have 2 choices:

1. Put '0'
2. Put '1'

Therefore for length n:

Total binary strings = 2^n


========================================================
                CONSTRAINTS
========================================================

- 1 <= n <= 20

========================================================
                TRY SOLVING
========================================================

1. Recursive Approach
   - At every position:
        choose '0'
        choose '1'

2. Backtracking Approach

========================================================
                EXPECTED COMPLEXITIES
========================================================

Time Complexity: O(2^n)

Space Complexity: O(n)
(recursion stack depth)

========================================================
*/

#include<iostream>
#include<string>
using namespace std;

void binaryStrings(string& current, int n){
    if(current.length() == n){ cout<<current<<"\n"; return;}

    current.push_back('0');
    binaryStrings(current,n);
    current.pop_back();

    current.push_back('1');
    binaryStrings(current,n);
    current.pop_back();

}

int main(){

    string current = "";
    int n = 2;
    binaryStrings(current,n);
    
    return 0;
}