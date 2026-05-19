#include<bits/stdc++.h>
using namespace std;

/*
========================================================
                DSA / LOGIC BUILDING BASICS
========================================================

This file contains quick notes and syntax for:

1. Variables
2. Input / Output
3. Conditions
4. Loops
5. Functions
6. Arrays
7. Vectors
8. Strings
9. Sorting
10. Searching
11. STL Basics
12. Hash Maps
13. Prefix Sum
14. Time Complexity
15. Common DSA Patterns

Useful before starting:
- Arrays + Hashing
- Sliding Window
- Recursion
- Linked List
- Trees

========================================================
                    VARIABLES
========================================================
*/

int globalVar = 100;

/*
Data Types:

int         -> integers
long long   -> very large integers
float       -> decimal
double      -> bigger decimal
char        -> single character
string      -> text
bool        -> true/false

*/

void greet(){
    cout << "Hello from function\n";
}

/*
========================================================
                        MAIN
========================================================
*/

int main(){

    /*
    ========================================================
                    INPUT / OUTPUT
    ========================================================
    */

    int a = 5;

    cout << "Value of a: " << a << "\n";

    /*
    cin >> variable;

    Example:
    int n;
    cin >> n;
    */

    /*
    ========================================================
                    CONDITIONS
    ========================================================
    */

    int num = 10;

    if(num % 2 == 0){
        cout << "Even\n";
    }else{
        cout << "Odd\n";
    }

    /*
    ========================================================
                        LOOPS
    ========================================================
    */

    // for loop
    for(int i=0; i<5; i++){
        cout << i << " ";
    }

    cout << "\n";

    // while loop
    int x = 0;

    while(x < 3){
        cout << x << " ";
        x++;
    }

    cout << "\n";

    /*
    ========================================================
                        FUNCTIONS
    ========================================================
    */

    greet();

    /*
    ========================================================
                        ARRAYS
    ========================================================
    */

    int arr[5] = {1,2,3,4,5};

    cout << arr[0] << "\n";

    /*
    ========================================================
                        VECTORS
    ========================================================
    */

    vector<int> vec = {10,20,30};

    // push_back
    vec.push_back(40);

    // size
    cout << vec.size() << "\n";

    // traversal
    for(int x : vec){
        cout << x << " ";
    }

    cout << "\n";

    /*
    ========================================================
                        STRINGS
    ========================================================
    */

    string s = "hello";

    // length
    cout << s.length() << "\n";

    // reverse
    reverse(s.begin(), s.end());

    cout << s << "\n";

    /*
    ========================================================
                        SORTING
    ========================================================
    */

    vector<int> nums = {5,1,4,2,3};

    sort(nums.begin(), nums.end());

    for(int x : nums){
        cout << x << " ";
    }

    cout << "\n";

    /*
    ========================================================
                    BINARY SEARCH
    ========================================================
    */

    int target = 4;

    bool found = binary_search(nums.begin(), nums.end(), target);

    if(found){
        cout << "Found\n";
    }else{
        cout << "Not Found\n";
    }

    /*
    ========================================================
                    UNORDERED MAP
    ========================================================
    */

    unordered_map<int,int> mp;

    vector<int> freqArr = {1,2,2,3,3,3};

    // frequency counting
    for(int x : freqArr){
        mp[x]++;
    }

    for(auto x : mp){
        cout << x.first << " -> " << x.second << "\n";
    }

    /*
    ========================================================
                    UNORDERED SET
    ========================================================
    */

    unordered_set<int> st;

    st.insert(10);
    st.insert(20);
    st.insert(10);

    // duplicates ignored

    for(int x : st){
        cout << x << " ";
    }

    cout << "\n";

    /*
    ========================================================
                        PREFIX SUM
    ========================================================
    */

    vector<int> prefixArr = {1,2,3,4,5};

    vector<int> prefix(prefixArr.size());

    prefix[0] = prefixArr[0];

    for(int i=1; i<prefixArr.size(); i++){
        prefix[i] = prefix[i-1] + prefixArr[i];
    }

    for(int x : prefix){
        cout << x << " ";
    }

    cout << "\n";

    /*
    Range Sum Formula:

    prefix[r] - prefix[l-1]
    */

    int l = 1;
    int r = 3;

    int rangeSum = prefix[r] - prefix[l-1];

    cout << "Range Sum: " << rangeSum << "\n";

    /*
    ========================================================
                    COMMON STL FUNCTIONS
    ========================================================
    */

    int maxi = max(10,20);
    int mini = min(10,20);

    cout << maxi << " " << mini << "\n";

    // swap
    int p = 5;
    int q = 10;

    swap(p,q);

    cout << p << " " << q << "\n";

    /*
    ========================================================
                    COMMON STRING FUNCTIONS
    ========================================================
    */

    string str = "abcd";

    // substring
    cout << str.substr(1,2) << "\n";

    // find
    if(str.find("bc") != string::npos){
        cout << "Substring exists\n";
    }

    /*
    ========================================================
                    TIME COMPLEXITY
    ========================================================

    O(1)      -> constant
    O(log n)  -> binary search
    O(n)      -> single loop
    O(n log n)-> efficient sorting
    O(n²)     -> nested loops

    Important:
    Nested loops often mean O(n²)

    ========================================================
                    IMPORTANT PATTERNS
    ========================================================

    1. Two Pointers
    2. Sliding Window
    3. Prefix Sum
    4. Hashing
    5. Binary Search
    6. Recursion
    7. Greedy
    8. Dynamic Programming

    ========================================================
                    EDGE CASES
    ========================================================

    Always think about:

    1. Empty input
    2. Single element
    3. Duplicates
    4. Negative numbers
    5. Overflow
    6. Already sorted input

    */

    return 0;
}