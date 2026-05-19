/*
Problem Statement:
Given an integer array nums and an integer k,
find the maximum sum of any contiguous subarray
of size k.

A subarray is a continuous part of the array.

Return the maximum possible sum among all
subarrays of size k.

Examples:

Input:
nums = [2,1,5,1,3,2]
k = 3

Output:
9

Explanation:
Subarrays of size 3:

[2,1,5] -> sum = 8
[1,5,1] -> sum = 7
[5,1,3] -> sum = 9
[1,3,2] -> sum = 6

Maximum sum = 9


Input:
nums = [2,3,4,1,5]
k = 2

Output:
7

Explanation:
Subarrays:
[2,3] -> 5
[3,4] -> 7
[4,1] -> 5
[1,5] -> 6

Maximum = 7


Constraints:
- Array can contain:
    - positive numbers
    - negative numbers
    - zeroes
- 1 <= k <= nums.size()
- Subarray elements must be contiguous

Try solving:
1. Brute Force
2. Optimized Sliding Window approach

Expected Optimal Time Complexity:
O(n)
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter array: ";
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Enter k: ";
    cin>>k;
    if(k<1 || k>n){cout<<"Invalid k.\n"; return 0;}

    int windowSum=0;

    for(int i=0; i<k; i++){
        windowSum += nums[i];
    }

    int maxSum = windowSum;

    for(int i=k; i<n; i++){
        windowSum += nums[i] - nums[i-k];
        maxSum = max(windowSum, maxSum);
    }

    cout<<"Max sum: "<<maxSum<<"\n";


    
    return 0;
}