#include<iostream>
using namespace std;

void print1ToN(int n){
    if(n == 0){return;}
    print1ToN(n-1);
    cout << n << " ";
    //create call stack silently then print on hit base case(print on release) to get reverse
}

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
    print1ToN(n);
    
    
    return 0;
}