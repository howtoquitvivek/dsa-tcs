#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n1;
    cout<<"Enter size of first array: ";
    cin>>n1;
    
    cout<<"Enter elements of first array: ";
    vector<int> vec1(n1);
    for(int i=0; i<n1; i++){
        cin>>vec1[i];
    }
    
    int n2;
    cout<<"Enter size of second array: ";
    cin>>n2;
    
    cout<<"Enter elements of second array: ";
    vector<int> vec2(n2);
    for(int i=0; i<n2; i++){
        cin>>vec2[i];
    }

    vector<int> vec3(n1+n2);
    int counter=0;

    // Logic: Append all elements of vec1 into vec3.
    for(int i=0; i<n1; i++){
        vec3[i] = vec1[i];
        counter++;
    }

    int diff = counter;
    
    // Logic: Append all elements of vec2 into vec3 after vec1 elements.
    for(int i=counter; i<n1+n2; i++){
        vec3[i] = vec2[i-diff];
    }

    // Edge Case: The prompt is "merge two SORTED array". Currently, this code concatenates them. It does NOT merge them in sorted order. If inputs are [1,5] and [2,4], output will be [1,5,2,4]. A `sort(vec3.begin(), vec3.end())` is missing if concatenation was intended, or a 2-pointer approach if strict merging was intended. Assuming logic must be untouched.

    for(auto x : vec3){
        cout<<x<<" ";
    }
    cout<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Two-Pointer Approach (Proper Merge Sort style):
   - Logic: Use `i=0` for `vec1`, `j=0` for `vec2`, and `k=0` for `vec3`. Compare `vec1[i]` and `vec2[j]`, insert the smaller into `vec3[k]`, and advance the pointer. This produces a correctly sorted merged array in O(N1 + N2).
   - Time Complexity: O(N1 + N2)
   - Space Complexity: O(N1 + N2) to hold the result.

2. Concatenation and Sort (Similar to Current, but with sorting):
   - Logic: Concatenate `vec1` and `vec2` (which is what the current code does), then `sort(vec3.begin(), vec3.end())`.
   - Time Complexity: O((N1+N2) log(N1+N2))
   - Space Complexity: O(N1 + N2)
*/