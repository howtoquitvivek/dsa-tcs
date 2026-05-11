#include <bits/stdc++.h>
using namespace std;

// An anagram is a word or phrase formed by rearranging the letters of another word or phrase.

// Logic: Convert all characters in the string to lowercase to ensure case-insensitive comparison.
void toLower(string &str){
    for(int i=0; i<str.length(); i++){
        str[i]=tolower(str[i]);
    }
}

int main() {

    string str1="";
    cout<<"Enter a 1st str: ";
    cin>>str1;

    string str2="";
    cout<<"Enter a 2nd str: ";
    cin>>str2;

    toLower(str1);
    toLower(str2);

    // Logic: Sort both strings. If they are anagrams, they will become exactly identical after sorting.
    // Edge Case: Strings of different lengths will naturally not match after sorting.
    // Edge Case: The approach correctly handles special characters or numbers if they are present in both strings, but usually anagram problems ignore spaces/punctuation which `cin>>` drops anyway for spaces.
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1==str2) cout<<"Anagram.\n";
    else cout<<"Not a anagram.\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Frequency Array / Hash Map (Optimal):
   - Logic: Create an array of size 26 (or 256 for ASCII). For each char in `str1`, increment its count. For each char in `str2`, decrement its count. If all counts are 0, they are anagrams.
   - Time Complexity: O(N)
   - Space Complexity: O(1) (size of frequency array is constant).
   - Advantage: Faster than sorting, particularly for long strings.

2. Sorting Approach (Current):
   - Time Complexity: O(N log N)
   - Space Complexity: O(1) or O(log N) depending on the sort implementation.
*/
