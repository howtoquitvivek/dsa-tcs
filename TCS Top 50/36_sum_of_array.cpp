#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5};

    int sum=0;

    for(auto x : vec){
        sum += x;
    }
    
    cout<<"Sum: "<<sum<<"\n";
    
    return 0;
}