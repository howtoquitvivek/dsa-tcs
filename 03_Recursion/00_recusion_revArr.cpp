#include<iostream>
#include<vector>
using namespace std;

void revArr(vector<int>& vec, int left, int right){
    if(left>=right){return;}
    swap(vec[left], vec[right]);
    revArr(vec, left+1, right-1);
}

int main(){

    vector<int> vec = {1,2,3,4,5};

    revArr(vec, 0, vec.size()-1);

    for(int x : vec){
        cout<<x<<" ";
    }

    cout<<"\n";
    
    return 0;
}