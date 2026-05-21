#include<iostream>
using namespace std;

void print1ToN(int n){
    if(n == 0){return;}
    print1ToN(n-1);
    cout << n << " ";
    //create call stack silently then print on hit base case(print on release) to get reverse
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    print1ToN(n);
    
    return 0;
}