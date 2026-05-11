#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5};

    int sum=0;

    // Logic: Iterate over all elements using a range-based for loop and accumulate their sum.
    // Edge Case: Empty array would skip the loop, keeping sum=0, which is correct.
    // Edge Case: Large numbers in array might cause integer overflow, using `long long sum` would be safer for general use cases.
    for(auto x : vec){
        sum += x;
    }
    
    cout<<"Sum: "<<sum<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. STL accumulate():
   - Logic: `#include <numeric>` then `int sum = accumulate(vec.begin(), vec.end(), 0);`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: One-liner, standard C++ way to sum ranges.

2. Recursive Approach:
   - Logic: `int getSum(int arr[], int n) { if(n <= 0) return 0; return arr[n-1] + getSum(arr, n-1); }`
   - Time Complexity: O(N)
   - Space Complexity: O(N) due to recursion stack.

3. Iterative Approach (Current):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
*/