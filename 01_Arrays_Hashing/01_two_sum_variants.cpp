#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Optimal approach using a map, could have also used a set as we dont need frequency
// but using a map makes easier to work with indices and generalize to more variants of 2sum

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    if(n<=1){cout<<"Invalid size\n"; return 0;}
    
    vector<int> vec(n);
    cout<<"Enter elements of array in the same line: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    unordered_map<int,int>mp;

    for(int i=0; i<n; i++){
        int need = target - vec[i];
        if(mp.find(need) != mp.end()){
            cout<<vec[i]<<"+"<<need<<"="<<target<<"\n";
            return 0;
        }else{
            mp[vec[i]]++;
        }
    }

    cout<<"Target not found\n";
    
    return 0;
}