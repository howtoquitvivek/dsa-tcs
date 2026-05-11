#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;

    cout << "Enter n, then enter array, then enter target (each in another line): ";
    cin >> n;

    // Edge Case: Minimum size to find a pair is 2.
    if(n <= 1){
        cout << "Invalid input\n";
        return 0;
    }

    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    int target;
    cin >> target;

    bool found = false;

    // Logic: Nested loops to check every possible pair combination.
    // Edge Case: Does not reuse elements (i != j) since inner loop starts at i+1.
    for(int i=0; i<vec.size(); i++){

        for(int j=i+1; j<vec.size(); j++){

            if(vec[i] + vec[j] == target){

                cout << vec[i] << " at " << i
                     << " index and "
                     << vec[j] << " at " << j
                     << " index = " << target << "\n";

                found = true;
            }
        }
    }

    if(!found){
        cout << "No pair found\n";
    }

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Hash Map (Optimal Time):
   - Logic: Store `target - vec[i]` and its index in an `unordered_map`. If `vec[i]` exists in the map, a pair is found.
   - Time Complexity: O(N)
   - Space Complexity: O(N)
   - Advantage: Extremely fast, standard approach for Two Sum in FAANG interviews.

2. Two Pointers (If array is SORTED):
   - Logic: `left = 0`, `right = n-1`. If `vec[left] + vec[right] > target`, `right--`. If `< target`, `left++`.
   - Time Complexity: O(N log N) (due to sorting) or O(N) if already sorted.
   - Space Complexity: O(1)

3. Brute Force (Current):
   - Time Complexity: O(N^2)
   - Space Complexity: O(1)
   - Advantage: Does not require extra space or sorting.
*/