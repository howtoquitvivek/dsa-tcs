#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="";
    cout<<"Enter a string: ";
    // Logic: Use getline to ensure strings with spaces are read completely. `cin>>` would stop at first space.
    getline(cin, str);

    string rev="";

    // Logic: Iterate from the last index `length()-1` down to 0, appending characters to `rev`.
    // Edge Case: If string is empty, `str.length()-1` might wrap around for unsigned types, but here it converts safely in loop condition or doesn't execute since it's `int`. (Wait, length() is size_t, so size_t(0)-1 is huge, but we assign to int `i`, so it becomes -1. -1 >= 0 is false, handled correctly).
    for(int i=str.length()-1; i>=0; i--){
        rev += str[i];
    }

    cout<<"Reversed string: "<<rev<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. In-Place Reversal (Two Pointers):
   - Logic: Maintain two pointers, `left = 0` and `right = n-1`. Swap `str[left]` and `str[right]`, then increment `left`, decrement `right` until they cross.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Doesn't require allocating a new string `rev`, which saves space.

2. Using Built-in Function (STL):
   - Logic: `reverse(str.begin(), str.end());`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
*/