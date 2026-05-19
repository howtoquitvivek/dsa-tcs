#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    // INPUT
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    if(n<=0){cout<<"Invalid\n"; return 0;}

    vector<int>vec(n);
    cout<<"Enter vector: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    // LOGIC

    unordered_map<int,int> mp;

    mp[0]=1; // Because if subarray starts from 0th index, empty(0) prefix sum should be there - kind of zero handling
    int prefixSum=0;
    int count=0;

    for(auto x : vec){
        prefixSum += x;

        // If current prefix sum - target exist krta hai, 
        // iska mtlb hai needed target ke liye elemets present the aur unhi ka prefix sum available hai
        // When elements are present, dont just increase count by 1, 
        // increase count by number of time those elememts are present

        if(mp.find(prefixSum - target) != mp.end()){
            count += mp[prefixSum - target];               
        }

        // If prefix sum not in map, add it
        mp[prefixSum]++;
    }

    cout<<"Max Subarrays: "<<count<<"\n";
    
    return 0;
}