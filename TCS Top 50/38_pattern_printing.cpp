#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"\n";

    for(int i=0; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            cout<<"x";
        }
        cout<<"\n";
    }
    
    return 0;
}