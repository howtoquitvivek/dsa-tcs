#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> vec(n);
    cout<<"Enter elements in single line: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    // Logic: Iterates through each element in the array from left to right and checks if it equals target.
    // Edge Case: If there are multiple occurrences of the target, this loop will print the index for ALL occurrences. If only the first was needed, a `break;` is required.
    // Edge Case: If target is not in the array, it silently finishes without output.
    for(int i=0; i<n; i++){
        if(vec[i]==target){
            cout<<"Target is present at index(0-type): "<<i<<"\n";
        }
    }

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. STL Find function:
   - Logic: `auto it = find(vec.begin(), vec.end(), target); if(it != vec.end()) index = distance(vec.begin(), it);`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Concise and less error-prone.

2. Linear Search with Early Exit:
   - Logic: Add a `break;` inside the `if` block if only the first occurrence is needed. Also maintain a `bool found` flag to print "Not found" when applicable.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
*/