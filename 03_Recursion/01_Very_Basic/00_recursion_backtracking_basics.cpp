#include<bits/stdc++.h>
using namespace std;

/*
========================================================
                    RECURSION BASICS
========================================================

Recursion:
A function calling itself.

Every recursive function needs:

1. Base Case
   -> stopping condition

2. Recursive Call
   -> function calls itself with smaller input

Without base case:
Infinite recursion occurs.

========================================================
                HOW RECURSION WORKS
========================================================

Example:

func(3)

func(3)
 -> func(2)
     -> func(1)
         -> func(0)

Then returns backward.

This uses:
CALL STACK

Each function call waits until smaller call finishes.

========================================================
                IMPORTANT CONCEPTS
========================================================

1. Base Case
2. Recursive Relation
3. Call Stack
4. Backtracking
5. Recursive Tree

========================================================
*/


/*
========================================================
            PRINT 1 TO N
========================================================
*/

void print1ToN(int n){

    // base case
    if(n == 0){
        return;
    }

    // smaller problem
    print1ToN(n-1);

    cout << n << " ";
}


/*
========================================================
            PRINT N TO 1
========================================================
*/

void printNTo1(int n){

    if(n == 0){
        return;
    }

    cout << n << " ";

    printNTo1(n-1);
}


/*
========================================================
            SUM OF FIRST N NUMBERS
========================================================

Formula:

sum(n) = n + sum(n-1)

*/

int sumN(int n){

    if(n == 0){
        return 0;
    }

    return n + sumN(n-1);
}


/*
========================================================
                    FACTORIAL
========================================================

n! = n * (n-1)!

*/

int factorial(int n){

    if(n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n-1);
}


/*
========================================================
                    FIBONACCI
========================================================

0 1 1 2 3 5 8 ...

fib(n) = fib(n-1) + fib(n-2)

*/

int fibonacci(int n){

    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}


/*
========================================================
                REVERSE ARRAY
========================================================
*/

void reverseArray(vector<int>& vec, int left, int right){

    if(left >= right){
        return;
    }

    swap(vec[left], vec[right]);

    reverseArray(vec, left+1, right-1);
}


/*
========================================================
                PALINDROME STRING
========================================================
*/

bool isPalindrome(string &s, int left, int right){

    if(left >= right){
        return true;
    }

    if(s[left] != s[right]){
        return false;
    }

    return isPalindrome(s, left+1, right-1);
}


/*
========================================================
                BINARY SEARCH
========================================================
*/

int binarySearch(vector<int>& vec, int left, int right, int target){

    if(left > right){
        return -1;
    }

    int mid = left + (right-left)/2;

    if(vec[mid] == target){
        return mid;
    }

    if(target < vec[mid]){
        return binarySearch(vec, left, mid-1, target);
    }

    return binarySearch(vec, mid+1, right, target);
}


/*
========================================================
                        MAIN
========================================================
*/

int main(){

    cout << "Print 1 to N:\n";
    print1ToN(5);

    cout << "\n\n";

    cout << "Print N to 1:\n";
    printNTo1(5);

    cout << "\n\n";

    cout << "Sum of first N numbers:\n";
    cout << sumN(5);

    cout << "\n\n";

    cout << "Factorial:\n";
    cout << factorial(5);

    cout << "\n\n";

    cout << "Fibonacci:\n";
    cout << fibonacci(7);

    cout << "\n\n";

    vector<int> vec = {1,2,3,4,5};

    reverseArray(vec, 0, vec.size()-1);

    cout << "Reversed Array:\n";

    for(int x : vec){
        cout << x << " ";
    }

    cout << "\n\n";

    string s = "madam";

    cout << "Palindrome Check:\n";

    if(isPalindrome(s, 0, s.length()-1)){
        cout << "Palindrome\n";
    }else{
        cout << "Not Palindrome\n";
    }

    cout << "\n";

    vector<int> nums = {1,2,3,4,5,6,7};

    cout << "Binary Search:\n";

    int idx = binarySearch(nums, 0, nums.size()-1, 5);

    cout << "Index: " << idx << "\n";

    return 0;
}


/*
Easy
Print 1 to n
Print n to 1
Sum of first n numbers
Factorial
Fibonacci

Medium Beginner
Reverse array
Palindrome string
Binary search recursion

Real Recursion / Backtracking
Subsequences
Subsets
Permutations
N-Queens
Sudoku
*/
























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