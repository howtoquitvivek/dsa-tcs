#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findmax(int st, int end, vector<int>& vec){
    if(st == end){return vec[st];}
    int maxi=vec[st];
    return max(maxi, findmax(st+1, end, vec));
}

int main(){

    vector<int> vec = {1,2,3,4};
    cout<<findmax(0,vec.size()-1,vec)<<endl;
    
    return 0;
}