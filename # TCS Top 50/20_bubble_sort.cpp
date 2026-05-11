#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {4,2,6,2,8,3,0};

    // Logic: Repeatedly step through the list, compare adjacent elements, and swap them if they are in the wrong order. The largest element 'bubbles' to the end in each outer pass.
    // Edge Case: Duplicates (like `2`) are handled correctly and relative order is maintained (stable sort).
    // Edge Case: If the array is already sorted, the loops will still run entirely (O(N^2)).
    for(int i=0; i<vec.size()-1; i++){
        for(int j=0; j<vec.size()-i-1; j++){
            if(vec[j]>vec[j+1]){
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
        }
    }

    cout<<"Sorted vector: ";
    for(auto x : vec){
        cout<<x<<" ";
    }
    cout<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Optimized Bubble Sort:
   - Logic: Add a `bool swapped = false` flag in the outer loop. If no swaps occur in the inner loop, break early as the array is fully sorted.
   - Time Complexity: O(N^2) worst case, but O(N) best case (already sorted).
   - Space Complexity: O(1)
   
2. Insertion Sort / Selection Sort:
   - Usually better performing elementary sorts than naive bubble sort with the same O(N^2) complexity.
   
3. STL std::sort (IntroSort):
   - Logic: `sort(vec.begin(), vec.end());`
   - Time Complexity: O(N log N)
   - Space Complexity: O(log N)
   - Advantage: Standard and optimal for practical use.
*/