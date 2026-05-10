#include<iostream>
#include<vector>
using namespace std;

// 1,2,3,4,5
// Sum = 15
// n(n+1)/2 = 15
// If both not equal no. missing = n(n+1)/2 - Sum

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int total = n*(n+1)/2;
    int sum=0;

    vector<int> vec(n-1);
    cout<<"Enter "<<n-1<<" elements: ";
    for(int i=0; i<n-1; i++){
        cin>>vec[i];
    }

    for(auto x:vec){
        sum+=x;
    }
    total == sum ? cout<<"No missing values.\n" : cout<< total-sum <<" is the missing values.\n";
    
    return 0;
}