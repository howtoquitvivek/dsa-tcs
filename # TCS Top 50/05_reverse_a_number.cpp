#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    long long rev=0;

    while(n != 0){
        rev = n%10 + rev*10;
        n /= 10;
    }

    cout<<"Ouput: "<<rev<<"\n";

    return 0;
}