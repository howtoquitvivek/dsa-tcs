#include<bits/stdc++.h>
using namespace std;

// Also known as HCF, it is the largest positive integer that divides both numbers without leaving a remainder.

int main(){

    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    int gcd = min(a,b);

    while(gcd>1){
        if(a%gcd==0 && b%gcd==0){
            break;
        }
        gcd--;
    }
    

    cout<<"GCD is: "<<gcd<<"\n";

    return 0;
}