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