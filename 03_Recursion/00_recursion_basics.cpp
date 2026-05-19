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