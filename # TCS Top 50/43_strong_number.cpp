#include<iostream>
using namespace std;

/*
When the factorial of each digit, and their sum equals the original number then that number is called strong.
eg. 145 = 1+24+120=145.
*/

int facN(int n){
    int fac=1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

int main(){

    int n;
    cout<<"Enter no: ";
    cin>>n;

    if(n<=0){cout<<"Invalid input\n"; return 0;}

    int facSum=0;
    int num=n;

    while(n != 0){
        facSum += facN(n%10);
        n /= 10;
    }

    facSum == num ? cout<<"Strong number\n" : cout<<"Not a strong number\n";
    
    return 0;
}