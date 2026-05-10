#include<bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cout<<"Enter first number: ";
    cin>>a;
    
    int b;
    cout<<"Enter second number: ";
    cin>>b;

    int c;
    cout<<"Enter third number: ";
    cin>>c;

    int temp = max(a,b);
    int res = max(temp,c);

    cout<<"Maximum is: "<<res<<"\n";

    return 0;
}