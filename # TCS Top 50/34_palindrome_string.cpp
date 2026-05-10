#include<iostream>
#include<string>
using namespace std;

void toLower(string &s){
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){

    string s;
    cout<<"Enter string: ";
    cin>>s;

    toLower(s);

    string rev="";
    for(int i=s.length()-1; i>=0; i--){
        rev += s[i];
    }

    s==rev ? cout<<"Palindrome\n" : cout<<"Not palindrome\n";
    
    return 0;
}