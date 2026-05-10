#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Move each element right and last element at first.

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>vec(n);
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int k=2;

    k = k % n;

    reverse(vec.begin(), vec.end());
    reverse(vec.begin(), vec.begin() + k);
    reverse(vec.begin() + k, vec.end());

    for(auto x : vec){
        cout<<x<<" ";
    }
    
    cout<<"\n";
    
    return 0;
}