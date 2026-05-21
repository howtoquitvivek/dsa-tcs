#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(int st, int end, vector<int> vec, int target){
    if(st>end){return false;}
    
    int mid = st + (end-st)/2;

    if(vec[mid] == target){return true;}

    if(target<vec[mid]){
        return binarySearch(st, mid-1, vec, target);
    }else{
        return binarySearch(mid+1, end, vec, target);
    }
}

int main(){

    vector<int> vec = {1,2,3,4};
    binarySearch(0, vec.size()-1, vec, 5) ? cout<<"True\n" : cout<<"False\n";

    return 0;
}