#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Move each element right and last element at first.

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>vec(n);
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    // Logic: The problem statement says "right by 1", but the code is generalized to rotate right by `k`.
    // Setting k=1 would match the file name, but currently k=2. Logic is untouched.
    int k=2;

    // Edge Case: If k > n, rotating by k is same as rotating by k % n.
    k = k % n;

    // Logic: Block reversal algorithm. 
    // Step 1: Reverse entire array.
    // Step 2: Reverse first k elements.
    // Step 3: Reverse remaining n-k elements.
    reverse(vec.begin(), vec.end());
    reverse(vec.begin(), vec.begin() + k);
    reverse(vec.begin() + k, vec.end());

    for(auto x : vec){
        cout<<x<<" ";
    }
    
    cout<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Simple Shifting (Only for right by 1):
   - Logic: Store `arr[n-1]` in a temp variable. Loop from `i=n-1` down to `1`: `arr[i] = arr[i-1]`. Finally `arr[0] = temp`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Simpler if `k=1` is strictly required.

2. Using Extra Array (For any k):
   - Logic: Create a new array, copy `arr[(i + n - k) % n]` to `new_arr[i]`.
   - Time Complexity: O(N)
   - Space Complexity: O(N)

3. Block Reversal Algorithm (Current):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Most optimal way to rotate array by `k` elements in-place.
*/