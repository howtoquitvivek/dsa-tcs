#include<bits/stdc++.h>
using namespace std;

// Also known as narcissisitc number, it is equal to the sum of its digit, 
// each raised to the power of number of digits in the number.

// Eg. 153 = 1^3 + 5^3 + 3^3

// Negative numbers are not armstrong

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<0){cout<<"Not\n"; return 0;}

    long places=10;
    int digits=1;

    while(n/places != 0){
        places *= 10;
        digits++;
    }

    long arm=0;
    int num = n;

    while(n != 0){
        arm += pow(n%10, digits);
        n /= 10;
    }

    if(num == arm) cout<<"Armstrong number.\n";
    else cout<<"Not an armstrong number.\n";

    return 0;
}