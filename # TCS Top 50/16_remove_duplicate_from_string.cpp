#include <bits/stdc++.h>
using namespace std;

int main(){

    string str="";
    cout<<"Enter a string: ";
    cin>>str;
    
    string newStr="";

    // Logic: Iterate over each character. If it is not found in the `newStr`, append it.
    // Edge Case: `cin>>` will only read till the first space, so sentences won't work unless changed to `getline`.
    // Edge Case: Empty strings are handled gracefully.
    for(int i=0; i<str.length(); i++){
        if(newStr.find(str[i]) == string::npos){
            newStr+=str[i];
        }
    }

    cout<<"Removed duplicates: "<<newStr<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Using Hash Set or Frequency Array:
   - Logic: Maintain a boolean array of size 256 (for all ASCII). When iterating, if `seen[str[i]]` is false, append to result and set to true.
   - Time Complexity: O(N)
   - Space Complexity: O(1) (fixed array size 256).
   - Advantage: `newStr.find()` takes O(N), making the overall current loop O(N^2). The Hash Set approach makes it strictly O(N).

2. Sorting Approach:
   - Logic: Sort the string, then remove duplicates by comparing adjacent elements. Note: This destroys the original order of characters, which might not be desirable.
   - Time Complexity: O(N log N)
   - Space Complexity: O(1)
*/