#include<iostream>
#include<vector>
#include<algorithm> // Needed for sort
using namespace std;

// Handle adjacent duplicates

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    // Edge Case: If n < 2, there can be no duplicates.
    if(n < 2) {
        cout << "No duplicate\n";
        return 0;
    }

    vector<int>vec(n);
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    // Logic: Sort the array so that identical elements become adjacent.
    sort(vec.begin(), vec.end());

    // Logic: Iterate through the sorted array and check if the current element equals the previous one.
    // Edge Case: Loop starts from 1 to avoid vec[-1] out of bounds. Returns on first duplicate found.
    for(int i=1; i<n; i++){
        if(vec[i]==vec[i-1]){
            cout<<"Duplicate: "<<vec[i]<<"\n";
            return 0;
        }
    }

    cout<<"No duplicate\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Hash Set Approach (Optimal for Time):
   - Logic: Insert elements into an `unordered_set`. If `set.insert(arr[i]).second == false`, it's a duplicate.
   - Time Complexity: O(N)
   - Space Complexity: O(N)
   
2. Frequency Array (If elements are in range 0 to N):
   - Logic: Increment count in a separate array `freq[arr[i]]++`. If `freq[arr[i]] > 1`, return.
   - Time Complexity: O(N)
   - Space Complexity: O(N) (or O(max_element))

3. Sorting Approach (Current):
   - Time Complexity: O(N log N)
   - Space Complexity: O(1) or O(log N) depending on sorting algorithm.
*/