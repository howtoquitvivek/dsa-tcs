#include<bits/stdc++.h>
using namespace std;

// A year is a leap year if it is divisible by 4.
// However, if the year is divisible by 100, it is not a leap year, unless it is also divisible by 400.


int main(){

    int n;
    cout<<"Enter an year: ";
    cin>>n;

    // Edge Case: Years cannot be negative or zero in usual calendar context, though it's not strictly checked here.
    // Logic: Century years must be strictly divisible by 400. Other years just by 4. The order of if-else checks this correctly.
    if(n % 400 == 0) {
        cout << n << " is a leap year.\n";
    }
    else if(n % 100 == 0) {
        cout << n << " is not a leap year.\n";
    }
    else if(n % 4 == 0) {
        cout << n << " is a leap year.\n";
    }
    else {
        cout << n << " is not a leap year.\n";
    }

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Single If-Condition Approach:
   - Logic: Combine checks using logical operators.
     `if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))`
   - Time Complexity: O(1)
   - Space Complexity: O(1)
   - Advantage: More concise and often preferred for simple conditional checks.

2. Using Built-in Date Libraries (if applicable):
   - Logic: In many high level languages or libraries, creating a date for Feb 29 and checking if it's valid is a way, but in C++ raw logic is standard.
*/