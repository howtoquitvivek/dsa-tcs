#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="";
    cout<<"Enter a string: ";
    getline(cin, str);

    string rev="";

    for(int i=str.length()-1; i>=0; i--){
        rev += str[i];
    }

    cout<<"Reversed string: "<<rev<<"\n";

    return 0;
}