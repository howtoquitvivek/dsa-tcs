#include<bits/stdc++.h>
using namespace std;

int main(){

    int r1,c1;
    cout<<"Enter r and c: ";
    cin>>r1>>c1;

    int r2=c1;
    int c2=r1;

    vector<vector<int>> vec1(r1, vector<int>(c1));
    vector<vector<int>> vec2(r2, vector<int>(c2));

    cout<<"Enter matrix elements in r and c format:\n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>vec1[i][j];
        }
    }

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