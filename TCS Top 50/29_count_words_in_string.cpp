#include<iostream>
#include<string>

using namespace std;

int main(){

    string s="";
    cout<<"Enter string: ";
    getline(cin, s);

    int count=0;

    for(char x : s){
        if(x ==' ') ++count;
    }

    cout<<"No. of words: "<<count+1<<"\n";

    return 0;
}