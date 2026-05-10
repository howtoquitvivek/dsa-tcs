#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    if(n<0){cout<<"Invalid\n"; return 0;}

    int sum=0;

    for(int i=2; i<=n; i++){
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j == 0){isPrime = false; break;}
        }
        if(isPrime) sum+=i;
    }

    cout<<"Sum: "<<sum<<"\n";
    
    return 0;
}