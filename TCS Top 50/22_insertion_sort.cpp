#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>vec = {5,4,3,1,2};

    for(int i=1; i<vec.size(); i++){

        if(vec[i]<vec[i-1]){

            int temp = vec[i];
            int j = i;

            while(j>0 && vec[j-1]>temp){
                vec[j]=vec[j-1];
                j--;
            }

            vec[j]=temp;
        }
    }

    for(int x : vec){
        cout<<x<<" ";
    }

    cout<<"\n";

    return 0;
}