#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;

    while(n!=0){
        sum += n%10;
        n /= 10;
    }

    cout<<"Sum of digits is: "<<sum<<"\n";

    return 0;
}