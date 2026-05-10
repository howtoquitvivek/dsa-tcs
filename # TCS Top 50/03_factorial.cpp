#include<bits/stdc++.h>
using namespace std;

// Fac of 0 is 1
// Fac of negative integers is undefined

// Use long long - upto fac 20
// Use int - upto fac 11
// limit input > 20

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    long long result = 1;

    if(n<0){
        cout<<"Undefined\n";
        return 0;
    }

    if(n > 20){
        cout << "Overflow\n";
        return 0;
    }

    for(int i=1; i<=n; i++){
        result *= i;
    }

    cout<<"Factorial: "<<result<<"\n";
    return 0;
}