/*
========================================================
                SUBSETS BACKTRACKING THEORY
========================================================

Problem:
Generate all possible subsets of an array.

Example:
nums = [1,2]

Subsets:
[]
[1]
[2]
[1,2]

========================================================
                CORE IDEA
========================================================

For every element we have 2 choices:

1. Take the element
2. Do not take the element

Because every element has 2 choices,
total subsets become:

2^n

========================================================
                RECURSIVE THINKING
========================================================

At every index ask:

"Kya current element lena hai ya nahi?"

Then recursively solve remaining array.

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

1. nums
   -> Original array

2. current subset
   -> Stores current chosen elements

3. index
   -> Current position in array

========================================================
                BASE CASE
========================================================

When:

index == nums.size()

means:

all decisions completed.

Now current subset is ready.

Print/store subset and return.

========================================================
                TAKE CHOICE
========================================================

Add current element:

push_back(nums[index])

Then recurse for next index.

========================================================
                BACKTRACK
========================================================

After recursion returns:

pop_back()

Why?

Because recursion must restore previous state
before exploring another choice.

Backtracking means:

"Undo previous decision"

========================================================
                NOT TAKE CHOICE
========================================================

Do not add current element.

Simply recurse for next index.

========================================================
                RECURSION TREE
========================================================

Example:
nums = [1,2]

                    []
                 /      \
              take1    skip1
              /   \     /   \
          take2 skip2 take2 skip2

Generated subsets:

[1,2]
[1]
[2]
[]

========================================================
                MOST IMPORTANT CONCEPT
========================================================

push -> recurse -> pop

This is the heart of backtracking.

Without pop_back(), old elements remain in subset
and future answers become incorrect.

========================================================
                TIME COMPLEXITY
========================================================

Each element has:
- take
- not take

So total subsets:

O(2^n)

========================================================
                SPACE COMPLEXITY
========================================================

Recursion depth can go up to:

O(n)

because of recursion stack.

========================================================
                MENTAL MODEL
========================================================

Backtracking explores all possible paths.

At every step:

Choose -> Explore -> Undo

This pattern is used in:
- subsets
- permutations
- n queens
- sudoku
- maze problems
- combinations
- word search
*/

#include<iostream>
#include<vector>
using namespace std;

void subsets(vector<int>& nums, vector<int>& current, int index){

    // base case
    if(index == nums.size()){

        cout << "[ ";

        for(int x : current){
            cout << x << " ";
        }

        cout << "]\n";

        return;
    }

    // TAKE
    current.push_back(nums[index]);

    subsets(nums, current, index+1);

    // BACKTRACK
    current.pop_back();

    // NOT TAKE
    subsets(nums, current, index+1);
}

int main(){

    vector<int> nums = {1,2,3};

    vector<int> current;

    subsets(nums, current, 0);

    return 0;
}