#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    vector<int> vec(n);
    int target;

    cout<<"Enter n, then enter array, then enter target (each in another line): ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    cin>>target;

    for(int i=1; i<vec.size(); i++){
        for(int j=i-1; j<vec.size(); j++){
            if(vec[i]+vec[j]==target) cout<<vec[i]<<" at "<<i<<" index and "<<vec[j]<<" at "<<j<<" index = "<<target<<"\n";
        }
    }

    
    return 0;
}