#include<iostream>
#include<vector>

using namespace std;

int main(){

    int x, n;
    cout<<"Enter base and power: ";
    cin>>x>>n;

    int res=1;

    for(int i=0; i<n; i++){
        res *= x;
    }

    cout<<"Result: "<<res<<"\n";
    
    return 0;
}