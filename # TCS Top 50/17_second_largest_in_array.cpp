#include <bits/stdc++.h>
using namespace std;

// Handle duplicates and size = 2

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> vec(n);

    // Edge Case: Array size less than 2 cannot have a second largest element.
    if(n < 2){
        cout << "Invalid\n";
        return 0;
    }

    // Edge Case: We need elements. Missing cin>> loop to input array elements! 
    // Logic below still assumes the vector has been populated properly.

    // Logic: Sort the array in ascending order.
    sort(vec.begin(), vec.end());

    int largest = vec[n-1];
    int secondLargest = -1;

    // Logic: Traverse from second last element backwards to find an element not equal to the largest (handling duplicates).
    for(int i=n-2; i>=0; i--){
        if(vec[i] != largest){
            secondLargest = vec[i];
            break;
        }
    }

    // Edge Case: If all elements were duplicates (e.g., [5,5,5]), `secondLargest` remains -1.
    if(secondLargest == -1){
        cout << "No second largest element\n";
    }else{
        cout << "Second largest element: " << secondLargest << "\n";
    }
        
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Two Pass Approach:
   - Logic: Iterate once to find the `largest`. Iterate again to find the maximum element strictly less than `largest`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)

2. Single Pass Approach (Optimal):
   - Logic: Maintain two variables `largest` and `second_largest`. Iterate through array:
     If `arr[i] > largest`, update `second_largest = largest` and `largest = arr[i]`.
     Else if `arr[i] > second_largest` and `arr[i] != largest`, update `second_largest = arr[i]`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)

3. Sorting Approach (Current):
   - Time Complexity: O(N log N)
   - Space Complexity: O(1) depending on `sort`.
*/