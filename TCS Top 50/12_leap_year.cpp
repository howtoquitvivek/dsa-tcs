#include<bits/stdc++.h>
using namespace std;

// A year is a leap year if it is divisible by 4.
// However, if the year is divisible by 100, it is not a leap year, unless it is also divisible by 400.


int main(){

    int n;
    cout<<"Enter an year: ";
    cin>>n;

    if(n%4==0){cout<<n<<" is a leap year.\n";}
    else if(n%100==0 && n%400==0){cout<<n<<" is a leap year.\n";}
    else{cout<<n<<" is not a leap year.\n";}

    return 0;
}