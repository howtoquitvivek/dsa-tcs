#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    
    // Edge Case: Array size <= 1 is inherently sorted.
    cout<<"Enter elements: ";
    vector<int> vec(n);
    for(int i=0; i<vec.size(); i++){
        cin>>vec[i];
    }

    bool isSorted = true;

    // Logic: Check if every element is smaller than or equal to the next. The loop starts from 1 to avoid index out of bounds on `i-1`.
    for(int i=1; i<vec.size(); i++){
        if(vec[i-1]>vec[i]){
            isSorted = false;
            break; // Edge Case: Break early if a violation is found for efficiency.
        }
    }

    isSorted ? cout<<"Sorted.\n":cout<<"Not sorted.\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. STL is_sorted():
   - Logic: `bool sorted = is_sorted(vec.begin(), vec.end());`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Clean and utilizes standard library.

2. Iterative Linear Scan (Current):
   - Logic: Compares adjacent elements.
   - Time Complexity: O(N) worst case, O(1) if first two elements are out of order.
   - Space Complexity: O(1)
*/