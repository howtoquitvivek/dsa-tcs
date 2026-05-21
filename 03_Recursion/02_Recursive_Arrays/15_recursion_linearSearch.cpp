#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool checksorted(int st, int end, vector<int>& vec){
    if(st == end){return true;}
    bool isSorted = vec[st] <= vec[st+1];
    return isSorted && checksorted(st+1, vec.size()-1, vec);
}

int main(){

    vector<int> vec = {1,2,3,5,4};
    checksorted(0, vec.size()-1, vec) ? cout<<"True\n" : cout<<"False\n";
    
    return 0;
}