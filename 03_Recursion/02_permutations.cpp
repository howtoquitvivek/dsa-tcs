/*
Problem Statement:
Given an array nums of distinct integers,
return all possible permutations.

A permutation is an arrangement of all elements
of the array in every possible order.

The order of returned permutations does not matter.

Examples:

Input:
nums = [1,2,3]

Output:
[
 [1,2,3],
 [1,3,2],
 [2,1,3],
 [2,3,1],
 [3,1,2],
 [3,2,1]
]


Input:
nums = [0,1]

Output:
[
 [0,1],
 [1,0]
]


Input:
nums = [1]

Output:
[
 [1]
]


Explanation:
For an array of size n,
total permutations are:

n!

because:
- first position has n choices
- second has (n-1)
- third has (n-2)
...

Constraints:
- 1 <= nums.length <= 6
- Elements are unique
- Array can contain negative numbers

Try solving:
1. Recursive Backtracking approach

Expected Time Complexity:
O(n!)

Expected Space Complexity:
O(n!)
*/