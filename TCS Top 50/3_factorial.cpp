#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int result = 1;

    for(int i=1; i<=n; i++){
        result *= i;
    }

    cout<<"Factorial of "<<n<<" is: "<<result<<"\n";
    return 0;
}