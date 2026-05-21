#include<iostream>
using namespace std;

int fibboN(int n){
    if(n==0){return 0;}
    if(n==1){return 1;}
    return fibboN(n-1) + fibboN(n-2);
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<fibboN(n)<<"\n";
    
    return 0;
}