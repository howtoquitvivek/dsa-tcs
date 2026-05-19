/*
========================================================
                PERMUTATIONS BACKTRACKING THEORY
========================================================

Problem:
Generate all possible permutations of an array/string.

Example:
nums = [1,2,3]

Permutations:
[1,2,3]
[1,3,2]
[2,1,3]
[2,3,1]
[3,1,2]
[3,2,1]

========================================================
                CORE IDEA
========================================================

For every position we try every possible element.

Example:

Position 0:
- place 1
- place 2
- place 3

Then recursively solve remaining positions.

========================================================
                RECURSIVE THINKING
========================================================

At every index ask:

"Current position pe konsa element rakhna hai?"

Try all possible choices one by one.

========================================================
                BACKTRACKING STEPS
========================================================

1. Choose
2. Explore
3. Undo choice (Backtrack)

========================================================
                PARAMETERS
========================================================

Usually recursion function contains:

1. nums/string
   -> original data

2. index
   -> current position to fill

========================================================
                BASE CASE
========================================================

When:

index == nums.size()

means:

one complete permutation formed.

Print/store permutation and return.

========================================================
                CHOICE
========================================================

For every index:

Try every possible element from:
index -> n-1

========================================================
                SWAP
========================================================

Place chosen element at current position:

swap(nums[index], nums[i])

Then recurse for next index.

========================================================
                BACKTRACK
========================================================

After recursion returns:

swap(nums[index], nums[i])

again.

Why?

Because recursion must restore original array
before exploring another choice.

Backtracking means:

"Undo previous arrangement"

========================================================
                RECURSION TREE
========================================================

Example:
nums = [1,2]

                [1,2]
               /     \
          swap(1,1) swap(1,2)
             /           \
          [1,2]        [2,1]

Generated permutations:

[1,2]
[2,1]

========================================================
                MOST IMPORTANT CONCEPT
========================================================

swap -> recurse -> swap

This is the heart of permutation backtracking.

Without second swap,
array remains modified and future answers become incorrect.

========================================================
                TIME COMPLEXITY
========================================================

Total permutations: n!

Overall complexity: O(n!)

========================================================
                SPACE COMPLEXITY
========================================================

O(n), because recursion depth can go up to n.

========================================================
                MENTAL MODEL
========================================================

Backtracking explores all arrangements.

At every step:

Choose -> Explore -> Undo

This pattern is used in:
- permutations
- subsets
- sudoku
- n queens
- maze problems
- combinations
- word search

========================================================
*/

#include<iostream>
#include<vector>
using namespace std;

void permutations(vector<int>& nums, int index){

    // base case
    if(index == nums.size()){

        cout << "[ ";

        for(int x : nums){
            cout << x << " ";
        }

        cout << "]\n";

        return;
    }

    for(int i=index; i<nums.size(); i++){

        // CHOOSE
        swap(nums[index], nums[i]);

        // EXPLORE
        permutations(nums, index+1);

        // BACKTRACK
        swap(nums[index], nums[i]);
    }
}

int main(){

    vector<int> nums = {1,2,3};

    permutations(nums, 0);

    return 0;
}