#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sumA(int st, int end, vector<int>& vec){
    if(st == end){return vec[st];}
    int current = vec[st];
    return current + sumA(st+1, end, vec);
}

int main(){

    vector<int> vec = {1,2,3,4};
    cout<<sumA(0,vec.size()-1,vec)<<endl;
    
    return 0;
}