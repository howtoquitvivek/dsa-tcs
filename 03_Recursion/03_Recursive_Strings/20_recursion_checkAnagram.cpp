#include<iostream>
#include<string>
using namespace std;

bool checkAnagram(string s1, string s2){

    // lengths must be same
    if(s1.length() != s2.length()){
        return false;
    }

    // base case
    if(s1.length() == 0 && s2.length() == 0){
        return true;
    }

    // take first char of s1
    char ch = s1[0];

    // find same char in s2
    int pos = s2.find(ch);

    // char not found
    if(pos == string::npos){
        return false;
    }

    // remove matched chars
    s1.erase(0,1);

    s2.erase(pos,1);

    // recurse on smaller strings
    return checkAnagram(s1, s2);
}

int main(){

    string s1 = "silent";
    string s2 = "listen";

    checkAnagram(s1, s2)
        ? cout << "Anagram\n"
        : cout << "Not Anagram\n";

    return 0;
}