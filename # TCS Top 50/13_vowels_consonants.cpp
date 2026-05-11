#include<bits/stdc++.h>
using namespace std;

// Only count alphabets using isalpha(str[i]) from cctypes header

// Logic: Check if character matches any of the 5 lowercase vowels.
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

    // Logic: Loop through each character, convert to lowercase, verify it is an alphabet, then categorize into vowel or consonant.
    // Edge Case: Non-alphabetic characters (numbers, special symbols, spaces) are safely ignored due to `isalpha`.
    // Edge Case: Empty strings are handled naturally as loop won't run.
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

/*
ALTERNATIVE APPROACHES:
1. String Iterators with C++ STL:
   - Logic: `for(char c : str)` to make the loop more readable without using indices.
   - Time Complexity: O(N) where N is length of string
   - Space Complexity: O(1)

2. Pre-defined Vowel String or Set Approach:
   - Logic: Check `string vowels = "aeiou"; if(vowels.find(c) != string::npos)` or use `unordered_set<char>`.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: `isVowel` function looks cleaner and is more scalable if checking more specific character groups.
*/