#include<bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cout<<"Enter first number: ";
    cin>>a;
    
    int b;
    cout<<"Enter second number: ";
    cin>>b;

    int c;
    cout<<"Enter third number: ";
    cin>>c;

    // Logic: Uses the built-in `max()` function which returns the greater of two elements.
    // Edge Case: If any two or all three numbers are equal, `max()` will return that same value, seamlessly handling duplicates.
    // Edge Case: Negative integers are seamlessly compared.
    int temp = max(a,b);
    int res = max(temp,c);

    cout<<"Maximum is: "<<res<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Nested If-Else / Relational Operators:
   - Logic: 
     `if(a >= b && a >= c) res = a;`
     `else if(b >= a && b >= c) res = b;`
     `else res = c;`
   - Time Complexity: O(1)
   - Space Complexity: O(1)
   - Note: Good to know for interviews where built-in functions might be prohibited.

2. Using Ternary Operator:
   - Logic: `int res = (a > b) ? (a > c ? a : c) : (b > c ? b : c);`
   - Time Complexity: O(1)
   - Space Complexity: O(1)

3. Using std::max() (Current):
   - Logic: Calls `max(max(a,b), c)`. Simple and readable.
   - Time Complexity: O(1)
   - Space Complexity: O(1)
*/