#include<iostream>
using namespace std;

//Using Euclid's Algo : gcd(a,b) = gcd(b, a%b)
// Base : when b becomes 0 -> answer is a

/*
gcd(48,18)

gcd(18,12)
gcd(12,6)
gcd(6,0)

answer = 6
*/

int gcd(int a, int b){
    if(b==0){return a;}
    return gcd(b, a%b);
}


int main(){

    cout<<gcd(48,18)<<endl;
    
    return 0;
}