#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    string s1="";
    string s="";
    cout<<"Enter: ";
    getline(cin, s1);

    // Logic: Wraps the original string with spaces to make word extraction easier.
    s+=" "+s1+" ";

    // Logic: Scans for space. When a space is found, it traverses back to find the start of the word, then uses two pointers (j, k) to reverse the characters of that word in place.
    // Edge Case: Reversing the characters of every word in place is achieved, but the *order of words* remains the same.
    // E.g., "Hello World" -> " olleH dlroW "
    // Note: The prompt usually means reversing word order ("World Hello"), but this code reverses individual characters. Logic kept untouched.
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

/*
ALTERNATIVE APPROACHES:
1. Stringstream (Best for reversing words, not characters):
   - Logic: `stringstream ss(s1); string word, ans = ""; while(ss >> word) ans = word + " " + ans;`
   - Time Complexity: O(N)
   - Space Complexity: O(N)

2. Double Reverse Approach (To reverse order of words):
   - Logic: Reverse the entire string first. Then traverse and reverse each individual word.
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   
3. In-Place Character Reversal (Current):
   - Logic: Reverses characters *within* each word, retaining word positions.
   - Time Complexity: O(N)
   - Space Complexity: O(1) (if we ignore the initial padded copy)
*/