#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> vec(n);
    cout<<"Enter elements in single line: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    for(int i=0; i<n; i++){
        if(vec[i]==target){
            cout<<"Target is present at index(0-type): "<<i<<"\n";
        }
    }

    return 0;
}