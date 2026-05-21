#include<iostream>
using namespace std;

int powerN(int x, int n){
    if(n==0){
        return 1;
    }
    return x * powerN(x, n-1);
}

int main(){
        
    cout<<powerN(2,3)<<endl;

    return 0;
}