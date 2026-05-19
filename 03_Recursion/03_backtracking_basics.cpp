#include<bits/stdc++.h>
using namespace std;

/*
========================================================
                BACKTRACKING BASICS
========================================================

Backtracking:
Try all possible choices recursively.

Main Idea:
1. Choose
2. Explore
3. Undo choice (Backtrack)

Used in:
- subsets
- permutations
- sudoku
- n queens
- maze problems

========================================================
                CORE TEMPLATE
========================================================

void solve(...){

    // base case

    for(all choices){

        // choose

        solve(smaller problem)

        // undo choice (backtrack)
    }
}

========================================================
                WHY BACKTRACK?
========================================================

Sometimes we must:
"try every possibility"

Backtracking systematically explores all paths.

========================================================
                SUBSETS EXAMPLE
========================================================

nums = [1,2]

Choices:

take 1 / not take 1
take 2 / not take 2

Subsets:
[]
[1]
[2]
[1,2]

========================================================
*/


/*
========================================================
                PRINT ALL SUBSETS
========================================================
*/

void generateSubsets(
    vector<int>& nums,
    vector<int>& current,
    int index
){

    /*
    Base Case:
    reached end of array
    */

    if(index == nums.size()){

        cout << "[ ";

        for(int x : current){
            cout << x << " ";
        }

        cout << "]\n";

        return;
    }

    /*
    ============================================
                CHOICE 1:
                TAKE ELEMENT
    ============================================
    */

    current.push_back(nums[index]);

    generateSubsets(nums, current, index+1);

    /*
    BACKTRACK:
    undo previous choice
    */

    current.pop_back();

    /*
    ============================================
                CHOICE 2:
                DO NOT TAKE
    ============================================
    */

    generateSubsets(nums, current, index+1);
}


/*
========================================================
                STRING PERMUTATIONS
========================================================

Example:
"abc"

Possible:
abc
acb
bac
bca
cab
cba

========================================================
*/

void permutations(string &s, int index){

    /*
    Base Case
    */

    if(index == s.length()){

        cout << s << "\n";

        return;
    }

    /*
    Try every character
    */

    for(int i=index; i<s.length(); i++){

        /*
        CHOOSE
        */

        swap(s[index], s[i]);

        /*
        EXPLORE
        */

        permutations(s, index+1);

        /*
        BACKTRACK
        restore original string
        */

        swap(s[index], s[i]);
    }
}


/*
========================================================
                PATH GENERATION
========================================================

Simple recursion tree visualization.

========================================================
*/

void binaryChoices(string current, int n){

    if(current.length() == n){

        cout << current << "\n";

        return;
    }

    /*
    choose 0
    */

    binaryChoices(current + "0", n);

    /*
    choose 1
    */

    binaryChoices(current + "1", n);
}


/*
========================================================
                IMPORTANT CONCEPTS
========================================================

1. Decision Tree
2. Choose / Explore / Undo
3. Recursive Tree
4. State Restoration
5. Base Case

========================================================
                TIME COMPLEXITY
========================================================

Backtracking is often exponential.

Subsets: O(2^n)

Permutations: O(n!)
*/


/*

========================================================
                        MAIN
========================================================
*/

int main(){

    /*
    ====================================================
                    SUBSETS
    ====================================================
    */

    vector<int> nums = {1,2,3};

    vector<int> current;

    cout << "Subsets:\n";

    generateSubsets(nums, current, 0);

    cout << "\n";

    /*
    ====================================================
                    PERMUTATIONS
    ====================================================
    */

    string s = "abc";

    cout << "Permutations:\n";

    permutations(s, 0);

    cout << "\n";

    /*
    ====================================================
                    BINARY CHOICES
    ====================================================
    */

    cout << "Binary Choices:\n";

    binaryChoices("", 3);

    return 0;
}