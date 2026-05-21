#include<iostream>
#include<string>
using namespace std;

int countVowel(int left, int right, string& s){

    if(left > right){return 0;}

    char ch = tolower(s[left]);
    bool isVowel = ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';

    if(isVowel){return 1 + countVowel(left+1, right, s);}
    return countVowel(left+1, right, s);
}

int main(){

    string s = "Hello World";

    cout << countVowel(0, s.length()-1, s) << "\n";

    return 0;
}