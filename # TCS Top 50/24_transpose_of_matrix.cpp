#include<bits/stdc++.h>
using namespace std;

int main(){

    int r1,c1;
    cout<<"Enter r and c: ";
    cin>>r1>>c1;

    // Logic: Transpose swaps rows with columns, so r2=c1 and c2=r1.
    int r2=c1;
    int c2=r1;

    // Edge Case: Non-square matrices are handled properly because we swap r1, c1 for the transposed matrix's dimensions.
    // Edge Case: Invalid dimensions (r1<=0 or c1<=0) are not checked but will fail on vector instantiation.
    vector<vector<int>> vec1(r1, vector<int>(c1));
    vector<vector<int>> vec2(r2, vector<int>(c2));

    cout<<"Enter matrix elements in r and c format:\n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>vec1[i][j];
        }
    }

    // Logic: Assign element at (i, j) of original matrix to (j, i) of transposed matrix.
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            vec2[i][j] = vec1[j][i];
        }
    }

    cout<<"\nTranspose: \n";
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<vec2[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. In-Place Transpose (ONLY for Square Matrices n x n):
   - Logic: Loop `i` from `0` to `n`, and `j` from `i+1` to `n`. Swap `vec[i][j]` with `vec[j][i]`.
   - Time Complexity: O(N^2)
   - Space Complexity: O(1)
   - Advantage: No extra matrix allocation needed. Highly optimal for square matrices.

2. Out-of-Place Transpose (Current):
   - Logic: Creating a new matrix `vec2`. Works for both rectangular and square matrices.
   - Time Complexity: O(R * C)
   - Space Complexity: O(R * C) for the extra matrix.
*/