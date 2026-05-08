#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="";
    cout<<"Enter a string: ";
    cin>>str;

    string rev="";

    for(int i=str.length(); i>=0; i--){
        rev += str[i];
    }

    cout<<"Reversed string: "<<rev<<"\n";

    return 0;
}