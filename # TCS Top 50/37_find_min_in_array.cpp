#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    // Edge Case: Array must have at least 1 element to find a minimum.
    if(n <= 0){
        cout << "Invalid input\n";
        return 0;
    }

    vector<int>vec(n);
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    // Logic: Initialize minimum as the maximum possible integer value.
    int mini=INT_MAX;

    // Logic: Iterate through the array. If a smaller element is found, update `mini`.
    for(int i=0; i<n; i++){
        if(mini>vec[i]) mini = vec[i];
    }

    cout<<"Min: "<<mini<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. STL min_element():
   - Logic: `int mini = *min_element(vec.begin(), vec.end());`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Short and readable.

2. Sorting Approach:
   - Logic: `sort(vec.begin(), vec.end()); int mini = vec[0];`
   - Time Complexity: O(N log N)
   - Space Complexity: O(1)

3. Linear Iteration (Current):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Note: Can also initialize `mini = vec[0]` instead of `INT_MAX` to avoid `#include <climits>`.
*/