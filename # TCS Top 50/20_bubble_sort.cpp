#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {4,2,6,2,8,3,0};

    for(int i=0; i<vec.size()-1; i++){
        for(int j=0; j<vec.size()-i-1; j++){
            if(vec[j]>vec[j+1]){
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
        }
    }

    cout<<"Sorted vector: ";
    for(auto x : vec){
        cout<<x<<" ";
    }
    cout<<"\n";

    return 0;
}