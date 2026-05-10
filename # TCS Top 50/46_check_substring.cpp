#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1="";
    string s2="";
    cout<<"Enter str and substr: ";
    cin>>s1>>s2;

    s1.find(s2) != string::npos ? cout<<"Yes\n" : cout<<"No\n";
    
    return 0;
}