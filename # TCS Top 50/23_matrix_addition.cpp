#include<bits/stdc++.h>
using namespace std;

/* Problem Statement: Given two matrices A and B of size r × c, compute their sum matrix.

C[i][j]=A[i][j]+B[i][j]

Input Format:
First line contains two integers: r c
where:
        r = number of rows
        c = number of columns
    Next r lines contain c integers for matrix A
    Next r lines contain c integers for matrix B

Output Format:
Print the sum matrix. */

int main(){

    int r, c;
    cout<<"Enter r and c: ";
    cin>>r>>c;

    // Edge Case: If r <= 0 or c <= 0, vector initialization will throw an error or behave unexpectedly. Ideally, check `if(r<=0 || c<=0) return 0;`.
    vector<vector<int>> vec1(r, vector<int>(c));
    vector<vector<int>> vec2(r, vector<int>(c));
    vector<vector<int>> vec3(r, vector<int>(c));

    cout<<"Enter vector 1: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>vec1[i][j];
        }
    }
    
    cout<<"\nEnter vector 2: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>vec2[i][j];
        }
    }


    // Logic: Matrix addition requires dimensions of both matrices to be strictly the same.
    // Iterate through each cell and add corresponding elements.
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            vec3[i][j] = vec1[i][j] + vec2[i][j];
        }
    }

    cout<<"\nOutput vector:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<vec3[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. In-Place Addition:
   - Logic: Instead of allocating a third matrix `vec3`, add `vec2[i][j]` directly to `vec1[i][j]`.
   - Time Complexity: O(R * C)
   - Space Complexity: O(1) extra space beyond the two input matrices.
   - Advantage: Saves O(R * C) memory if the original matrices don't need to be preserved.

2. Matrix Addition using 1D Array representation:
   - Logic: A 2D matrix can be flattened into a 1D array of size `r*c`. `index = i*c + j`.
   - Time Complexity: O(R * C)
   - Space Complexity: O(R * C)
*/