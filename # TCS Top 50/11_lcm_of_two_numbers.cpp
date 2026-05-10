#include <bits/stdc++.h>
using namespace std;

// LCM of two numbers is the smallest positive number that is divisible by the two given numbers.
// GCD(a,b) * LCM(a,b) = a*b

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
        cout << "LCM is: " << a << "\n";
        return 0;
    }

    if(b == 0) {
        cout << "LCM is: " << b << "\n";
        return 0;
    }

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