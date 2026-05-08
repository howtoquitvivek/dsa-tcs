#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int num=n;
    int rev=0;

    while(n != 0){
        rev = n%10 + rev*10;
        n /= 10;
    }

    if(num == rev) cout<<"Palindrome\n";
    else cout<<"Not a palindrome number\n";

    return 0;
}