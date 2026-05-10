#include <bits/stdc++.h>
using namespace std;

// Handle duplicates and size = 2

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> vec(n);

    if(n < 2){
        cout << "Invalid\n";
        return 0;
    }

    sort(vec.begin(), vec.end());

    int largest = vec[n-1];
    int secondLargest = -1;

    for(int i=n-2; i>=0; i--){
        if(vec[i] != largest){
            secondLargest = vec[i];
            break;
        }
    }

    if(secondLargest == -1){
        cout << "No second largest element\n";
    }else{
        cout << "Second largest element: " << secondLargest << "\n";
    }
        
    return 0;
}