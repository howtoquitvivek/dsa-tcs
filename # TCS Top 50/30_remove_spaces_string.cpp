#include<iostream>
#include<string>
using namespace std;

// Handle consecutive spaces

int main(){

    string s;
    cout<<"Enter string: ";
    getline(cin, s);

    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){

            int j = i + 1;

            while(j <= s.length()){
                s[j-1] = s[j];
                j++;
            }

            i--;
        }
    }

    cout<<s<<"\n";
    
    return 0;
}