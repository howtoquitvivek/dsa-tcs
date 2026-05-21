#include<iostream>
#include<string>
using namespace std;

string revStr(int st, int end, string& s){
    if(st >= end){return s;}
    swap(s[st],s[end]);
    return revStr(st+1, end-1, s);
}

int main(){

    string s = "String";
    revStr(0, s.length()-1, s);
    cout<<s<<endl;
    
    return 0;
}