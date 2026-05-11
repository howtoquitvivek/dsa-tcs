#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>vec = {5,4,3,1,2};

    // Logic: Builds the final sorted array one item at a time. It takes an element and inserts it into its correct position in the sorted part of the array.
    // Edge Case: If the array is already sorted, the inner while loop doesn't execute, making the best-case time complexity O(N).
    for(int i=1; i<vec.size(); i++){

        if(vec[i]<vec[i-1]){

            int temp = vec[i];
            int j = i;

            while(j>0 && vec[j-1]>temp){
                vec[j]=vec[j-1];
                j--;
            }

            vec[j]=temp;
        }
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
   - Logic: `sort(vec.begin(), vec.end());`
   - Time Complexity: O(N log N)
   - Space Complexity: O(log N)

2. Insertion Sort (Current):
   - Time Complexity: Worst Case O(N^2) (reverse sorted), Best Case O(N) (already sorted).
   - Space Complexity: O(1)
   - Advantage: Very efficient for small datasets or nearly sorted arrays. Often used as a subroutine in IntroSort (std::sort).
*/