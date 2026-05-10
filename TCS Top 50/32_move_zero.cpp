#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>vec(n);
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int j=0;
    
    for(int i=0; i<n; i++){
        if(vec[i] != 0){
            swap(vec[j],vec[i]);
            j++;
        }
    }

    for(auto x : vec){
        cout<<x<<" ";
    }

    cout<<"\n";
    
    return 0;
}