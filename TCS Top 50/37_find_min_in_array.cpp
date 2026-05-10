#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>vec(n);
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int mini=INT_MAX;

    for(int i=0; i<n; i++){
        if(mini>vec[i]) mini = vec[i];
    }

    cout<<"Min: "<<mini<<"\n";
    
    return 0;
}