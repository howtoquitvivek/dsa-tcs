#include<iostream>
using namespace std;

void printNTo1(int n){
    if(n == 0){return;}
    cout << n << " ";
    printNTo1(n-1);
    //print during call stack creation then release silently
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    printNTo1(n);
    
    return 0;
}