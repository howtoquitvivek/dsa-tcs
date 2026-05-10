#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    string s1="";
    string s="";
    cout<<"Enter: ";
    getline(cin, s1);

    s+=" "+s1+" ";

    for(int i=1; i<s.size(); i++){
        if(s[i]==' '){
            int j=i-1;
            int k=i-1;
            while(s[j]!=' '){
                j--;
            }
            j++;
            while(j<k){
                swap(s[j],s[k]);
                j++;
                k--;
            }
        }
    }

    cout<<s<<"\n";
    
    return 0;
}