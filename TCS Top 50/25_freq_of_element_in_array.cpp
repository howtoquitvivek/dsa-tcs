#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    vector<int> vec(n);
    int target;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements in a single line: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    cout<<"Enter target: ";
    cin>>target;

    int count=0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == target){
            count++;
        }
    }
    cout<<"Frequency of element is: "<<count<<"\n";

    return 0;
}