#include<bits/stdc++.h>
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

    // Logic: Binary search requires a sorted array to split the search space properly.
    sort(vec.begin(), vec.end());

    cout<<"Sorted array: ";
    for(int x : vec){
        cout<<x<<" ";
    }

    cout<<"\n";

    int low=0;
    int high=n-1;
    bool found = false;

    // Logic: Keep halving the search space. 
    // Edge Case: Using `low + (high - low)/2` instead of `(low + high)/2` prevents integer overflow when low and high are very large.
    // Edge Case: Empty array would have `n=0`, `high=-1`, `low<=high` becomes `0<=-1` (false), cleanly skipping the loop.
    while(low<=high){
        int mid = low+(high-low)/2;
        if(target==vec[mid]){
            cout<<"Target at: "<<mid<<"\n";
            found = true;
            break;
        }else if(target<vec[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    if(!found){
        cout << "Target not found\n";
    }

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Recursive Binary Search:
   - Logic: Pass `low` and `high` as function arguments. `if(target < vec[mid]) return search(low, mid-1);`
   - Time Complexity: O(log N)
   - Space Complexity: O(log N) due to recursive call stack.

2. STL binary_search / lower_bound:
   - Logic: `bool present = binary_search(vec.begin(), vec.end(), target);`
   - Time Complexity: O(log N)
   - Space Complexity: O(1)
   - Advantage: Extremely concise and robust.

3. Iterative Binary Search (Current):
   - Time Complexity: O(log N) (excluding sorting time which is O(N log N)).
   - Space Complexity: O(1)
*/