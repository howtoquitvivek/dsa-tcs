#include<iostream>
#include<string>
using namespace std;

// Handle leading/trailing spaces

int main(){

    string s="";
    cout<<"Enter string: ";
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for(char x : s){
        if(x != ' ' && !inWord){
            count++;
            inWord = true;
        }
        else if(x == ' '){
            inWord = false;
        }
    }

    cout<<"No. of words: "<<count+1<<"\n";

    return 0;
}