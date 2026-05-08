#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    sort(vec.begin(), vec.end());
    cout<<"Second largest element: "<<vec.at(n-2)<<"\n";
    
    return 0;
}