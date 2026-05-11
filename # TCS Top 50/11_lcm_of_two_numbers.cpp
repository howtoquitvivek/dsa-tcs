#include <bits/stdc++.h>
using namespace std;

// LCM of two numbers is the smallest positive number that is divisible by the two given numbers.
// GCD(a,b) * LCM(a,b) = a*b

// Handle 0 and negative carefully

int main(){
    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    // Edge Case: LCM is typically defined for positive integers. Prevent negative numbers for simplicity.
    if(a<0 || b<0){
        cout<<"invalid input\n"; 
        return 0;
    }

    // Edge Case: If one of the numbers is 0, the LCM is 0. Here, returning the other number might be a misunderstanding of LCM. Mathematically LCM(a, 0) is usually 0. However, keeping logic untouched as requested.
    if(a == 0) {
        cout << "LCM is: " << a << "\n";
        return 0;
    }

    if(b == 0) {
        cout << "LCM is: " << b << "\n";
        return 0;
    }

    // Logic: First find the GCD using brute-force, then use the formula LCM = (a*b)/GCD.
    int gcd = min(a,b);

    while(gcd>1){
        if(a%gcd==0 && b%gcd==0){
            break;
        }
        gcd--;
    }
    
    // Edge Case: a*b might cause integer overflow if numbers are large, typically long long is preferred here.
    cout<<"LCM is: "<<(a*b)/gcd<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Incrementing Multiples (Brute Force):
   - Logic: Start with `max(a, b)` and keep incrementing it until it is divisible by both `a` and `b`.
   - Time Complexity: O(A * B) in worst case
   - Space Complexity: O(1)

2. Using Euclidean Algorithm for GCD (Optimal):
   - Logic: First compute GCD using `while(b!=0){int t=b; b=a%b; a=t;}`. Then LCM = (a/GCD) * b. Note doing `a/GCD` first prevents overflow compared to `(a*b)/GCD`.
   - Time Complexity: O(log(min(A, B)))
   - Space Complexity: O(1)
*/