#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>vec(n);
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int j=0;
    
    // Logic: Two-pointer approach. `j` points to the position where the next non-zero element should go.
    // `i` scans through the array. When a non-zero is found, it swaps with `j` and increments `j`.
    // Edge Case: If the array has no zeroes, `swap(vec[i], vec[j])` where `i==j` happens harmlessly.
    // Edge Case: If the array is all zeroes, the `if` block never executes, and zeroes remain in place.
    for(int i=0; i<n; i++){
        if(vec[i] != 0){
            swap(vec[j],vec[i]);
            j++;
        }
    }

    for(auto x : vec){
        cout<<x<<" ";
    }

    cout<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Extra Array:
   - Logic: Create a new array. First pass: append all non-zeroes. Second pass: append zeroes.
   - Time Complexity: O(N)
   - Space Complexity: O(N)

2. Two Pointers (Overwrite and Fill):
   - Logic: Keep `index = 0`. Iterate through array; if element != 0, `arr[index++] = arr[i]`. After loop, fill from `index` to `n` with 0s.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Slightly fewer writes than swapping if there are many zeroes.

3. Two Pointers (Swapping - Current):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Single pass.
*/