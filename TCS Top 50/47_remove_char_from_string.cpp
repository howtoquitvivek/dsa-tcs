#include<iostream>
#include<string>
using namespace std;

int main(){

    string s="";
    string newS="";
    string c="";

    cout<<"Enter string: ";
    getline(cin, s);

    cout<<"Enter char: ";
    cin>>c;

    for(int i=0; i<s.length(); i++){
        if(s[i] != c[0]){
            newS += s[i];
        }
    }

    cout<<"New str: "<<newS<<"\n";
    
    return 0;
}