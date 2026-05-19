/*
Problem Statement:
Given an integer array nums containing unique elements,
return all possible subsets (the power set).

A subset is any combination of elements from the array,
including:
- empty subset
- full array itself

The order of subsets does not matter.

Examples:

Input:
nums = [1,2,3]

Output:
[
 [],
 [1],
 [2],
 [3],
 [1,2],
 [1,3],
 [2,3],
 [1,2,3]
]


Input:
nums = [0]

Output:
[
 [],
 [0]
]


Explanation:
For an array of size n,
total subsets are:

2^n

because every element has 2 choices:
- take
- not take


Constraints:
- 1 <= nums.length <= 15
- Elements are unique
- Array can contain negative numbers

Try solving:
1. Recursive Backtracking approach

Expected Time Complexity:
O(2^n)

Expected Space Complexity:
O(2^n)
*/