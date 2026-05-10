#include<iostream>
#include<cmath>
using namespace std;

// A prime number is a no. which has only two distinct positive divsors: 1 and itself.
// A compostite no. is a natural number greater than 1, which has two positive divsors.
// Hence 1 is niether a Prime nor a Composite number,

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    bool isPrime = true;
    if(n<=1) isPrime = false;
    
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){isPrime = false; break;}
    }

    if(isPrime) cout<<"Prime number\n";
    else cout<<"Not a prime number\n";

    return 0;
}