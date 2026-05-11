#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){

    vector<int> vec1 = {0,1,2,4,3,4,5,6,10,10};
    vector<int> vec2 = {4,5,6,7,2,8,9,10,0};

    set<int> s;

    // Logic: Uses two nested loops to check every element of vec1 against every element of vec2.
    // When a match is found, inserts it into a `std::set`.
    // Edge Case: `std::set` automatically handles duplicates, so if `10` matches multiple times, it's only printed once.
    // Edge Case: Handles unsorted arrays correctly.
    for(int i = 0; i < vec1.size(); i++){

        for(int j = 0; j < vec2.size(); j++){

            if(vec1[i] == vec2[j]){

                s.insert(vec1[i]);
            }
        }
    }

    for(int x : s){

        cout << x << " ";
    }

    cout << "\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Two Pointers (If arrays were SORTED):
   - Logic: Sort both arrays. `i=0, j=0`. If `vec1[i] < vec2[j]`, `i++`. If `vec1[i] > vec2[j]`, `j++`. If equal, add to set and `i++, j++`.
   - Time Complexity: O(N log N + M log M)
   - Space Complexity: O(min(N,M)) for results.

2. Hash Map / Hash Set (Optimal Time for Unsorted):
   - Logic: Insert all elements of `vec1` into an `unordered_set`. Iterate through `vec2` and check if element exists in the set.
   - Time Complexity: O(N + M) average case.
   - Space Complexity: O(N)
   
3. Nested Loops with Set (Current):
   - Time Complexity: O(N * M * log(min(N,M))) (log comes from `s.insert()`).
   - Space Complexity: O(min(N,M))
*/