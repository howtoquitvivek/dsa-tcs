#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMin(int st, int end, vector<int>& vec){
    if(st == end){return vec[st];}
    int mini=vec[st];
    return min(mini, findMin(st+1, end, vec));
}

int main(){

    vector<int> vec = {1,2,0,3,4};
    cout<<findMin(0,vec.size()-1,vec)<<endl;
    
    return 0;
}