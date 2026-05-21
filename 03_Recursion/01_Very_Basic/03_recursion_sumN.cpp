#include<iostream>
using namespace std;

int sumN(int n){
    if(n==0){return 0;}
    return n + sumN(n-1);
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<sumN(n)<<"\n";
    
    return 0;
}