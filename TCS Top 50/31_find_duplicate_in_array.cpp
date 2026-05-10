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

    for(int i=1; i<n; i++){
        if(vec[i]==vec[i-1]){
            cout<<"Duplicate: "<<vec[i]<<"\n";
            return 0;
        }
    }

    cout<<"No duplicate\n";
    
    return 0;
}