#include<iostream>
#include<vector>

using namespace std;

// Handle negative

int main(){

    int x, n;
    cout<<"Enter base and power: ";
    cin>>x>>n;

    if(n < 0){
        cout << "Negative powers not supported\n";
        return 0;
    }

    long long res=1;

    for(int i=0; i<n; i++){
        res *= x;
    }

    cout<<"Result: "<<res<<"\n";
    
    return 0;
}