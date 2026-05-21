#include<iostream>
#include<vector>
using namespace std;

void print(int st, int end, vector<int>& vec){
    if(st == end){
        cout<<vec[st]<<endl;
        return;
    }
    cout<<vec[st]<<" ";
    return print(st+1, end, vec);
}

int main(){
    
    vector<int> vec = {1,2,3,4,5,6};

    print(0, vec.size()-1, vec);

    return 0;
}