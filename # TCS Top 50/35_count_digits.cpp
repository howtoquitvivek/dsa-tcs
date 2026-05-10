#include<iostream>
using namespace std;

// Handle zero

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n == 0){
        cout << "Digits: 1\n";
        return 0;
    }

    int count=0;

    while(n!=0){
        n/=10;
        count++;
    }

    cout<<"Digits: "<<count<<"\n";

    return 0;
}