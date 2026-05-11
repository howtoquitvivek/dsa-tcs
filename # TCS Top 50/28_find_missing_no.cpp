#include<iostream>
#include<vector>
using namespace std;

// 1,2,3,4,5
// Sum = 15
// n(n+1)/2 = 15
// If both not equal no. missing = n(n+1)/2 - Sum

// Handle malformed input

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    // Logic: Use mathematical sum of first `n` natural numbers formula `n(n+1)/2`.
    int total = n*(n+1)/2;
    int sum=0;

    // Edge Case: Negative values or zero are invalid as natural numbers start from 1.
    if(n <= 0){
        cout << "Invalid input\n";
        return 0;
    }

    // Edge Case: Array size is exactly `n-1` as only 1 number is missing.
    vector<int> vec(n-1);
    cout<<"Enter "<<n-1<<" elements: ";
    for(int i=0; i<n-1; i++){
        cin>>vec[i];
    }

    // Logic: Calculate actual sum of elements in the array.
    for(auto x:vec){
        sum+=x;
    }
    
    // Logic: The missing number is the difference between expected total and actual sum.
    // Edge Case: There's a bug in the printing logic -> `count+1` issue in my mind? Wait, no, `total == sum` prints "No missing values." But `total` will never equal `sum` unless `n` was 0, but that's caught early. Actually, wait! If `total-sum` is printed, it is correct.
    // However, if the missing number is somehow out of range, the difference will be incorrect. But assuming valid input from 1 to N, it's fine.
    // Note: The print statement here has a small logical quirk -> if `total == sum` it prints "No missing", but by definition of the problem size is `n-1` so one is always missing. But logic is untouched.
    total == sum ? cout<<"No missing values.\n" : cout<< total-sum <<" is the missing values.\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. XOR Approach (Optimal & Safe from Overflow):
   - Logic: XOR all numbers from 1 to `N`. Then XOR all elements in the array. The final result will be the missing number, because `a XOR a = 0`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: The mathematical sum `n*(n+1)/2` can cause integer overflow if `n` is very large (e.g., `n = 10^5`). XOR completely avoids overflow.

2. Mathematical Sum Approach (Current):
   - Time Complexity: O(N)
   - Space Complexity: O(N) to store array, though array isn't strictly needed if we compute sum on the fly during `cin`.
*/