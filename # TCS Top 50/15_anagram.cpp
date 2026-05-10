#include <bits/stdc++.h>
using namespace std;

// An anagram is a word or phrase formed by rearranging the letters of another word or phrase.

void toLower(string &str){
    for(int i=0; i<str.length(); i++){
        str[i]=tolower(str[i]);
    }
}

int main() {

    string str1="";
    cout<<"Enter a 1st str: ";
    cin>>str1;

    string str2="";
    cout<<"Enter a 2nd str: ";
    cin>>str2;

    toLower(str1);
    toLower(str2);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1==str2) cout<<"Anagram.\n";
    else cout<<"Not a anagram.\n";

    return 0;
}
