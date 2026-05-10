#include<iostream>
#include<cmath>
#include<string>
using namespace std;

// Check for invalid binary

int main(){

    string binary;
    cout<<"Enter a no: ";
    cin>>binary;

    for(char x : binary){
        if(x != '0' && x != '1'){
            cout << "Invalid binary number\n";
            return 0;
        }
    }

    int decimal = 0;
    int power = 0;

    for(int i=binary.length()-1; i>=0; i--){
        if(binary[i] == '1'){
            decimal += pow(2, power);
        }
        power++;
    }

    cout<<"Decimal: "<<decimal<<"\n";
    
    return 0;
}