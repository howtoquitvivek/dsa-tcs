/*
Problem Statement:
Given an integer array nums and an integer k,
return the total number of continuous subarrays
whose sum equals k.

A subarray is a contiguous non-empty sequence
of elements within an array.

Examples:

Input:
nums = [1,1,1]
k = 2

Output:
2

Explanation:
Subarrays with sum = 2 are:
[1,1] -> index 0 to 1
[1,1] -> index 1 to 2


Input:
nums = [1,2,3]
k = 3

Output:
2

Explanation:
Subarrays:
[1,2]
[3]


Input:
nums = [3,4,7,2,-3,1,4,2]
k = 7

Output:
4


Constraints:
- Array can contain:
    - positive numbers
    - negative numbers
    - zeroes
- Subarray elements must be contiguous
- Try solving:
    1. Brute Force
    2. Optimized approach using Prefix Sum + Hash Map

Expected Optimal Time Complexity:
O(n)
*/

// 1. Brute force - use three nested loops and sum and check
// 2. Prefix sum  - use two nested loops and leverage prefix sum
// 3. Optimal = Prefix sum + hashmap ( currentPrefixSum−previousPrefixSum=k )

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    if(n<=0){cout<<"Invalid\n"; return 0;}

    vector<int>vec(n);
    cout<<"Enter vector: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int target = 3;
    int count = 0;
    
    for(int st=0; st<n; st++){
        int sum = 0;
        for(int end=st; end<n; end++){
            sum += vec[end];
            if(sum == target){count++;}
        }
    }

    cout<<"Max sum subarrays: "<<count<<"\n";
    
    return 0;
}