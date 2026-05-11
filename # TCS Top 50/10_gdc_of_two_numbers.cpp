#include<bits/stdc++.h>
using namespace std;

// Also known as HCF, it is the largest positive integer that divides both numbers without leaving a remainder.
// Handle 0 and negative carefully

int main(){

    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    // Edge Case: Disallow negative numbers for simplicity. GCD is usually defined for positive integers.
    if(a<0 || b<0){
        cout<<"invalid input\n"; 
        return 0;
    }

    // Edge Case: If one of the numbers is 0, the GCD is the absolute value of the other number.
    if(a == 0) {
        cout << "GCD is: " << b << "\n";
        return 0;
    }

    if(b == 0) {
        cout << "GCD is: " << a << "\n";
        return 0;
    }

    // Logic: Since GCD cannot be greater than the smallest of the two numbers, we start checking from `min(a,b)` downwards to 1.
    int gcd = min(a,b);

    while(gcd>1){
        if(a%gcd==0 && b%gcd==0){
            break;
        }
        gcd--;
    }
    

    cout<<"GCD is: "<<gcd<<"\n";

    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Euclidean Algorithm (Subtraction method):
   - Logic: `while (a != b) { if (a > b) a = a - b; else b = b - a; } return a;`
   - Time Complexity: O(max(A,B)) in worst case (e.g., GCD(1, 10^9)).
   - Space Complexity: O(1)

2. Euclidean Algorithm (Modulo method) - OPTIMAL:
   - Logic: `while(a > 0 && b > 0) { if(a > b) a = a % b; else b = b % a; } return (a == 0) ? b : a;`
   - Time Complexity: O(log(min(A, B)))
   - Space Complexity: O(1)
   - Advantage: Extremely fast even for large numbers compared to iterating downwards.

3. Brute Force (Current):
   - Logic: Loop from `min(a,b)` down to 1. 
   - Time Complexity: O(min(A,B))
   - Space Complexity: O(1)
*/