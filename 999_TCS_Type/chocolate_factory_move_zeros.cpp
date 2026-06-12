/*
Problem Statement:

A chocolate factory packs chocolates into packets represented
by an integer array arr of size N.

A packet with value 0 represents an empty packet.

The task is to move all empty packets (0s) to the end of the
array while maintaining the relative order of the non-zero
elements.

Input:
N   -> Number of packets
arr -> Array containing packet values

Output:
Array after moving all 0s to the end.

Example:

Input:
N = 7
arr = [4,5,0,1,9,0,5]

Output:
[4,5,1,9,5,0,0]

Explanation:
There are 2 empty packets (0s).
All non-zero elements retain their original order and
the 0s are shifted to the end.

Approach:

1. Read N and the array arr.
2. Traverse the array and place all non-zero elements
   at the beginning of the array.
3. Count the number of non-zero elements inserted.
4. Fill the remaining positions with 0.
5. Print the modified array.

Time Complexity: O(N)
Space Complexity: O(1)
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }

    int index = 0;

    for(int i=0; i<n; i++)
    {
        if(vec[i] != 0)
        {
            vec[index] = vec[i];
            index++;
        }
    }

    while(index < n)
    {
        vec[index] = 0;
        index++;
    }

    for(int i=0; i<n; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}