#include<iostream>
using namespace std;

int sumN(int n){
    if(n==0){return 0;}
    return n + sumN(n-1);
}

int factN(int n){
    if(n==0){return 1;}
    if(n==1){return 1;}
    return n * factN(n-1);
}

int fibboN(int n){
    if(n==0){return 0;}
    if(n==1){return 1;}
    return fibboN(n-1) + fibboN(n-2);
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<sumN(n)<<"\n";
    cout<<factN(n)<<"\n";
    cout<<fibboN(n)<<"\n";
    
    return 0;
}