#include<iostream>
#include<cmath>
#include<string>
using namespace std;

// Check for invalid binary

int main(){

    string binary;
    cout<<"Enter a no: ";
    cin>>binary;

    // Logic: Validate that input consists only of '0's and '1's.
    for(char x : binary){
        if(x != '0' && x != '1'){
            cout << "Invalid binary number\n";
            return 0;
        }
    }

    int decimal = 0;
    int power = 0;

    // Logic: Traverse binary string from right to left (least significant bit first).
    // If bit is '1', add 2^power to the decimal sum.
    // Edge Case: If binary string is extremely long (e.g. > 31 bits), `decimal` will integer overflow.
    // Edge Case: Handles "0" naturally.
    for(int i=binary.length()-1; i>=0; i--){
        if(binary[i] == '1'){
            decimal += pow(2, power);
        }
        power++;
    }

    cout<<"Decimal: "<<decimal<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. STL stoi():
   - Logic: `int decimal = stoi(binary, nullptr, 2);`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Simplest, standard C++ way to convert binary string to integer. Throws `out_of_range` exception on overflow.

2. Iterative Doubling (Optimal for Time):
   - Logic: Iterate left to right: `decimal = decimal * 2 + (s[i] - '0');`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Doesn't use `pow()`, avoiding floating point inaccuracies and making it much faster.

3. Right-to-Left with pow() (Current):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Note: `pow()` returns a double, which can sometimes cause precision issues, though safe for small integers.
*/