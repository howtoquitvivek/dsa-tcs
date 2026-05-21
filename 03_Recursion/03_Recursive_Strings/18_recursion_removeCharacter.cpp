#include<iostream>
#include<string>
using namespace std;

void removeChar(int left, int right, string s, char c){
    if(left>right){return;}
    if(s[left] != c) cout<<s[left];

    removeChar(left+1, right, s, c);
}

int main(){

    string s = "String char c!";
    removeChar(0, s.length()-1, s, 'c');

    return 0;
}