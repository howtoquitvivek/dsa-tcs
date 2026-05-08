#include <bits/stdc++.h>
using namespace std;

// LCM of two numbers is the smallest positive number that is divisible by the two given numbers.
// GCD(a,b) * LCM(a,b) = a*b

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
    
    cout<<"LCM is: "<<(a*b)/gcd<<"\n";

    return 0;
}