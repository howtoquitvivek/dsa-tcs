#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool lsearch(int st, int end, vector<int>& vec, int target){
    if(st == end && vec[st] == target){return true;}
    if(st == end && vec[st] != target){return false;}
    bool isTarget = vec[st]==target;
    return isTarget || lsearch(st+1, end, vec, target);
}

int main(){

    vector<int> vec = {1,2,3,5,4};
    lsearch(0, vec.size()-1, vec, 20) ? cout<<"True\n" : cout<<"False\n";
    
    return 0;
}