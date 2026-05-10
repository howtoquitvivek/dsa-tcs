#include<bits/stdc++.h>
using namespace std;

// In Fibonacci, each number is the sum of two preceeding ones.
// 0,1,1,2,3,5,8,13,21,34...

int main(){

    int n;
    cout<<"Get Fibonacci upto: ";
    cin>>n;

    if(n>90){
        cout<<"Overflow\n";
        return 0;
    }
    
    if(n<0){
        cout<<"Negative not allowed\n";
        return 0;
    }

    if(n==0) {cout<<"0\n"; return 0;}
    else if(n==1) {cout<<"1\n"; return 0;}

    long long a=0;
    long long b=1;
    
    cout<<a<<","<<b;

    for(int i=3; i<=n; i++){
        long long c = a+b;
        cout<<","<<c;
        a=b;
        b=c;
    }

    cout<<"\n";
    return 0;
}