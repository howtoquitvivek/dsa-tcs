/*
Problem Statement:

Given a string S consisting only of '*' and '#'.

Find the difference between the number of '*' characters
and the number of '#' characters present in the string.

Output Rules:
- If count('*') > count('#'), output a positive integer.
- If count('#') > count('*'), output a negative integer.
- If count('*') == count('#'), output 0.

Formula:

Result = Count('*') - Count('#')

Examples:

Input:
###***

Count('*') = 3
Count('#') = 3

Result = 3 - 3 = 0

Output:
0

Input:
****##

Count('*') = 4
Count('#') = 2

Result = 4 - 2 = 2

Output:
2

Input:
##***

Count('*') = 3
Count('#') = 2

Result = 3 - 2 = 1

Output:
1

Approach:

1. Read the input string S.
2. Initialize:
      starCount = 0
      hashCount = 0
3. Traverse the string:
      If character is '*'
          starCount++
      Else if character is '#'
          hashCount++
4. Compute:
      result = starCount - hashCount
5. Print result.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin>>s;

    int hash = 0;
    int star = 0;

    for(auto x : s){
        if(x == '#'){hash++;}
        else{star++;}
    }

    int result = star - hash;
    cout<<result<<endl;
    
    return 0;
}