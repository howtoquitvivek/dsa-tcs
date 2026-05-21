#include<iostream>
using namespace std;

void dtb(int num){
    if(num/2 == 0){cout<<num%2; return;}
    dtb(num/2);
    cout<<num%2;
}


int main(){

    dtb(4);
    
    return 0;
}