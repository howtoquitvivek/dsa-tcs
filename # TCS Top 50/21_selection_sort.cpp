#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>vec = {5,9,3,1,8,6,4,2,7};

    for(int i=0; i<vec.size(); i++){
        int min_index=i;
        for(int j=i+1; j<vec.size(); j++){
            if(vec[j]<vec[min_index]){
                min_index=j;
            }
        }
        int temp=vec[i];
        vec[i]=vec[min_index];
        vec[min_index]=temp;
    }

    for(int x : vec){
        cout<<x<<" ";
    }

    cout<<"\n";

    return 0;
}