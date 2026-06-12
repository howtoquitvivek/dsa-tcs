#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Problem:
// Given an array, find the Next Greater Element (NGE)
// for every element.
//
// Next Greater Element = first element on the right
// that is greater than the current element.
//
// Example:
//
// Input:
// [2, 1, 3, 5, 4]
//
// Output:
// [3, 3, 5, -1, -1]
//
// Explanation:
// 2 -> 3
// 1 -> 3
// 3 -> 5
// 5 -> none -> -1
// 4 -> none -> -1
//
// Approach (Monotonic Stack):
//
// 1. Create a stack.
// 2. Traverse the array from right to left.
//
// 3. For each element:
//
//    a. Remove all elements from the stack
//       that are smaller than or equal to
//       the current element.
//
//       Reason:
//       They can never become the next greater
//       element for the current value.
//
//    b. If the stack becomes empty,
//       NGE = -1.
//
//    c. Otherwise,
//       NGE = stack.top().
//
//    d. Push the current element into the stack.
//
// 4. Continue until all elements are processed.
//
// Example:
//
// Array: [2, 1, 3, 5, 4]
//
// Start from right:
//
// 4:
// stack empty
// answer = -1
// push 4
//
// 5:
// pop 4
// stack empty
// answer = -1
// push 5
//
// 3:
// top = 5
// answer = 5
// push 3
//
// 1:
// top = 3
// answer = 3
// push 1
//
// 2:
// pop 1
// top = 3
// answer = 3
// push 2
//
// Final Answer:
// [3, 3, 5, -1, -1]
//
// Key Observation:
//
// Stack stores possible next greater elements.
//
// Before processing an element,
// remove all smaller elements from the stack.
//
// The first remaining element on top
// becomes the Next Greater Element.

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        
        if (!st.empty()) {
            result[i] = st.top();
        }
        
        st.push(arr[i]);
    }
    
    return result;
}

int main() {
    vector<int> arr = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
    
    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    vector<int> res = nextGreaterElement(arr);
    
    cout << "Next Greater Elements: ";
    for (int x : res) cout << x << " ";
    cout << endl;
    
    return 0;
}
