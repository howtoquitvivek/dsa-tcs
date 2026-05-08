#include<bits/stdc++.h>
using namespace std;

// In Fibonacci, each number is the sum of two preceeding ones.
// 0,1,1,2,3,5,8,13,21,34...

int main(){

    int n;
    cout<<"Get Fibonacci upto: ";
    cin>>n;

    int a=0;
    int b=1;
    
    cout<<a<<","<<b;

    for(int i=3; i<=n; i++){
        int c = a+b;
        cout<<","<<c;
        a=b;
        b=c;
    }

    cout<<"\n";
    return 0;
}