#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>vec = {5,9,3,1,8,6,4,2,7};

    // Logic: Divides array into sorted and unsorted parts. Repeatedly selects the minimum element from unsorted part and puts it at the beginning.
    // Edge Case: If array is already sorted, logic still runs O(N^2) as it blindly checks for minimum.
    // Edge Case: Handles duplicate elements gracefully.
    for(int i=0; i<vec.size(); i++){
        int min_index=i;
        for(int j=i+1; j<vec.size(); j++){
            if(vec[j]<vec[min_index]){
                min_index=j;
            }
        }
        int temp=vec[i];
        vec[i]=vec[min_index];
        vec[min_index]=temp;
    }

    for(int x : vec){
        cout<<x<<" ";
    }

    cout<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. STL std::sort:
   - Logic: Internal implementation uses IntroSort (QuickSort + HeapSort + InsertionSort).
   - Time Complexity: O(N log N)
   - Space Complexity: O(log N)
   - Advantage: Far more optimal than Selection Sort for practical use cases.

2. Selection Sort (Current):
   - Time Complexity: O(N^2) for all cases (Best, Average, Worst).
   - Space Complexity: O(1)
   - Advantage: Never makes more than O(N) swaps, making it useful when memory writing is costly.
*/