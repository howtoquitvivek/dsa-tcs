#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

bool palind(string &s, int left, int right){

    if(left >= right){
        return true;
    }

    if(s[left] != s[right]){
        return false;
    }

    return palind(s, left+1, right-1);
}

int main(){

    string s = "nurses Run";

    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }

    palind(s, 0, s.length()-1)
    ? cout << "yes\n"
    : cout << "no\n";

    return 0;
}