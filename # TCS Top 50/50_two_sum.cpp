#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;

    cout << "Enter n, then enter array, then enter target (each in another line): ";
    cin >> n;

    if(n <= 1){
        cout << "Invalid input\n";
        return 0;
    }

    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    int target;
    cin >> target;

    bool found = false;

    for(int i=0; i<vec.size(); i++){

        for(int j=i+1; j<vec.size(); j++){

            if(vec[i] + vec[j] == target){

                cout << vec[i] << " at " << i
                     << " index and "
                     << vec[j] << " at " << j
                     << " index = " << target << "\n";

                found = true;
            }
        }
    }

    if(!found){
        cout << "No pair found\n";
    }

    return 0;
}