#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> vec(n);
    cout<<"Enter elements in single line: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    sort(vec.begin(), vec.end());

    cout<<"Sorted array: ";
    for(int x : vec){
        cout<<x<<" ";
    }

    cout<<"\n";

    int low=0;
    int high=n-1;
    bool found = false;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(target==vec[mid]){
            cout<<"Target at: "<<mid<<"\n";
            found = true;
            break;
        }else if(target<vec[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    if(!found){
        cout << "Target not found\n";
    }

    return 0;
}