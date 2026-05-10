#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    
    cout<<"Enter elements: ";
    vector<int> vec(n);
    for(int i=0; i<vec.size(); i++){
        cin>>vec[i];
    }

    bool isSorted = true;

    for(int i=1; i<vec.size(); i++){
        if(vec[i-1]>vec[i]){
            isSorted = false;
            break;
        }
    }

    isSorted ? cout<<"Sorted.\n":cout<<"Not sorted.\n";

    return 0;
}