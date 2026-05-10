#include<iostream>
#include<string>
using namespace std;

/*
Adding '0'

'0' is just a constant with value 48. [1 is 49]
If n % 2 is 0:

Copy code
0 + '0'  →  0 + 48  →  48  →  '0'
If n % 2 is 1:

Copy code
1 + '0'  →  1 + 48  →  49  →  '1' 
*/


int main(){

    int n;
    cout<<"Enter a no: ";
    cin>>n;

    string b="";

    while(n!=0){
        b = char((n % 2) + '0') + b;
        n /= 2;
    }

    cout<<"Binary: "<<b<<"\n";
    
    return 0; 
}