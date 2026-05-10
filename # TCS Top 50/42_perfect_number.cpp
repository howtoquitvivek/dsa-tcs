#include<iostream>
using namespace std;

/* 
    A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.
    For instance, 6 has proper divisors 1, 2, and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number. 
    The next perfect number is 28, because 28 has proper divisors 1, 2, 4 , 7, 14, and 1 + 2 + 4 + 7 + 14 = 28.
*/

int main(){

    int n;
    cout<<"Enter no: ";
    cin>>n;

    if(n<=0){cout<<"Invalid input\n"; return 0;}

    int sumDiv=0;

    for(int i=1; i<n; i++){
        if(n%i == 0){
            sumDiv += i;
        }
    }

    sumDiv == n ? cout<<"Perfect\n" : cout<<"Not perfect\n";
    
    return 0;
}