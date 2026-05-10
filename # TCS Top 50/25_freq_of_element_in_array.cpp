#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements in a single line: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int target;
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