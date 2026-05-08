#include <bits/stdc++.h>
using namespace std;

int main(){

    string str="";
    cout<<"Enter a string: ";
    cin>>str;
    
    string newStr="";

    for(int i=0; i<str.length(); i++){
        if(newStr.find(str[i]) == string::npos){
            newStr+=str[i];
        }
    }

    cout<<"Removed duplicates: "<<newStr<<"\n";

    return 0;
}