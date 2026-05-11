#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    // Edge Case: If n <= 0, vector is empty and loop will cleanly skip.
    vector<int> vec(n);
    cout<<"Enter elements in a single line: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;

    int count=0;
    // Logic: Linearly scan the array and increment count when a match is found.
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == target){
            count++;
        }
    }
    cout<<"Frequency of element is: "<<count<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Using STL count():
   - Logic: `int count = std::count(vec.begin(), vec.end(), target);`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Extremely clean and optimal.

2. Binary Search (Only if array is SORTED):
   - Logic: Find `lower_bound` (first occurrence) and `upper_bound` (first element greater than target). Frequency is `upper_bound - lower_bound`.
   - Time Complexity: O(log N)
   - Space Complexity: O(1)

3. Linear Search (Current):
   - Works for unsorted arrays.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
*/