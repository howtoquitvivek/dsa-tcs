/*
Problem Statement:
Given an unsorted array of integers, find the length of the longest consecutive sequence.

A consecutive sequence means numbers that follow each other continuously
with a difference of 1.

The elements do NOT need to be adjacent in the array.

Return the length of the longest consecutive sequence.

Examples:

Input:
[100,4,200,1,3,2]

Output:
4

Explanation:
The longest consecutive sequence is:
[1,2,3,4]

Length = 4


Input:
[0,3,7,2,5,8,4,6,0,1]

Output:
9

Explanation:
The longest consecutive sequence is:
[0,1,2,3,4,5,6,7,8]

Length = 9


Constraints:
- Array can contain duplicates
- Array can contain negative numbers
- Solve efficiently in O(n) time if possible
*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// One approach i can think of is - first sort array, then start at 0 index and keep finiding difference of elements
// if difference is 1, increase count.
// if difference is 0 (duplicate elements), don't add to count and don't stop.
// if difference is >1, return count.
// time complexity is O(n log n) -> due to sorting

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    if(n<=0){cout<<"Invalid size\n"; return 0;}

    vector<int>vec(n);

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    unordered_set<int> st;

    for(int x : vec){
        st.insert(x);
    }

    int count=1;

    for(int i=0; i<vec.size(); i++){
        int current=0;
        int temp=1;
        if(st.find(vec[i]-1) == st.end()){
            current = vec[i];
            while(st.find(current + 1) != st.end()){
                temp++;
                current++;
            }
            count = max(count, temp);
        }
    }

    cout<<count<<"\n";


    return 0;
}