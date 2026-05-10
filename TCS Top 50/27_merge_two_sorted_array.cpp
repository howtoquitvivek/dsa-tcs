#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n1;
    cout<<"Enter size of first array: ";
    cin>>n1;
    
    cout<<"Enter elements of first array: ";
    vector<int> vec1(n1);
    for(int i=0; i<n1; i++){
        cin>>vec1[i];
    }
    
    int n2;
    cout<<"Enter size of second array: ";
    cin>>n2;
    
    cout<<"Enter elements of second array: ";
    vector<int> vec2(n2);
    for(int i=0; i<n2; i++){
        cin>>vec2[i];
    }

    vector<int> vec3(n1+n2);
    int counter=0;

    for(int i=0; i<n1; i++){
        vec3[i] = vec1[i];
        counter++;
    }

    int diff = counter;
    
    for(int i=counter; i<n1+n2; i++){
        vec3[i] = vec2[i-diff];
    }

    for(auto x : vec3){
        cout<<x<<" ";
    }
    cout<<"\n";
    
    return 0;
}