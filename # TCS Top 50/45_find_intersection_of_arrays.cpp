#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){

    vector<int> vec1 = {0,1,2,4,3,4,5,6,10,10};
    vector<int> vec2 = {4,5,6,7,2,8,9,10,0};

    set<int> s;

    for(int i = 0; i < vec1.size(); i++){

        for(int j = 0; j < vec2.size(); j++){

            if(vec1[i] == vec2[j]){

                s.insert(vec1[i]);
            }
        }
    }

    for(int x : s){

        cout << x << " ";
    }

    cout << "\n";

    return 0;
}