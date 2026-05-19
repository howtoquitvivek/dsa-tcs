/*
Problem Statement:
Given a string s, find the length of the longest substring
without repeating characters.

A substring is a contiguous sequence of characters
within the string.

Return the length of the longest substring
that contains all unique characters.

Examples:

Input:
s = "abcabcbb"

Output:
3

Explanation:
The longest substring without repeating characters is:
"abc"

Length = 3


Input:
s = "bbbbb"

Output:
1

Explanation:
The longest substring is:
"b"

Length = 1


Input:
s = "pwwkew"

Output:
3

Explanation:
The longest substring is:
"wke"

Length = 3

Note:
"pwke" is NOT a substring because substring
must be contiguous.


Input:
s = ""

Output:
0


Constraints:
- String can contain:
    - lowercase letters
    - uppercase letters
    - digits
    - symbols
    - spaces
- 0 <= s.length() <= 5 * 10^4

Try solving:
1. Brute Force
2. Optimized Sliding Window + Hashing approach

Expected Optimal Time Complexity:
O(n)
*/

#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){

    string s="";
    cout<<"Enter string: ";
    getline(cin, s);

    unordered_set<char> st;

    int maxLength=0;

    int right=0;
    int left=0;
    while(right<s.length()){
        if(st.find(s[right]) == st.end()){
            st.insert(s[right]);
            right++;
            int temp = st.size();
            maxLength = max(temp, maxLength);
        }else if(st.find(s[right]) != st.end()){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
        }
    }

    cout<<"Max: "<<maxLength<<"\n";
    
    return 0;
}

// Use set to check keep window.
// Add and remove items as per condition and track the best answer
// Time: O(2N) as two while loops are there but the only move pointer right and the inner loop does not
// run from i=0 to i<n
// Space: O(k) where k is characters in current window, or in worst case O(n) when all characters are unique