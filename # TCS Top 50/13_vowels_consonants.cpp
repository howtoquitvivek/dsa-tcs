#include<bits/stdc++.h>
using namespace std;

// Only count alphabets using isalpha(str[i]) from cctypes header

bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }
    return false;
}

int main(){
    string str="";
    cout<<"Enter a str: ";
    cin>>str;

    int vow=0;
    int con=0;

    for(int i=0; i<str.length(); i++){
        str[i]=tolower(str[i]);
        if(isalpha(str[i])){
            if(isVowel(str[i])){
                vow++;
            }else{
                con++;
            }
        }
    }

    cout<<"Vowels: "<<vow<<"\n";
    cout<<"Consonants: "<<con<<"\n";

    return 0;
}