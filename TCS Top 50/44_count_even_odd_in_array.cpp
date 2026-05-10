#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {0,1,2,3,4,5,6};

    int even=0;
    int odd=0;
    
    for(int i=0; i<vec.size(); i++){
        if(vec[i]%2==0) ++even;
        if(vec[i]%2!=0) ++odd;
    }

    cout<<"Even: "<<even<<"\n"<<"Odd: "<<odd<<"\n";
    
    return 0;
}