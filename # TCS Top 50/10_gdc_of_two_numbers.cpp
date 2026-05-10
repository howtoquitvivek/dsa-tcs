#include<bits/stdc++.h>
using namespace std;

// Also known as HCF, it is the largest positive integer that divides both numbers without leaving a remainder.
// Handle 0 and negative carefully

int main(){

    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    if(a<0 || b<0){
        cout<<"invalid input\n"; 
        return 0;
    }

    if(a == 0) {
        cout << "GCD is: " << b << "\n";
        return 0;
    }

    if(b == 0) {
        cout << "GCD is: " << a << "\n";
        return 0;
    }

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