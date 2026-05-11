#include<iostream>
using namespace std;

/*
When the factorial of each digit, and their sum equals the original number then that number is called strong.
eg. 145 = 1+24+120=145.
*/

// Logic: Helper function to compute factorial of a digit.
int facN(int n){
    int fac=1;
    // Edge Case: If n=0, the loop won't run and returns 1, which correctly handles 0! = 1.
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

int main(){

    int n;
    cout<<"Enter no: ";
    cin>>n;

    // Edge Case: Strong numbers are typically positive integers.
    if(n<=0){cout<<"Invalid input\n"; return 0;}

    int facSum=0;
    int num=n;

    // Logic: Extract each digit from right to left using modulo 10, add its factorial to the sum, and divide by 10.
    while(n != 0){
        facSum += facN(n%10);
        n /= 10;
    }

    // Logic: Compare the sum of factorials with the original number.
    facSum == num ? cout<<"Strong number\n" : cout<<"Not a strong number\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Precomputed Factorial Array (Optimal):
   - Logic: Since digits are only 0-9, precompute their factorials: `int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};`. Inside loop, do `facSum += fact[n%10];`.
   - Time Complexity: O(D) where D is number of digits.
   - Space Complexity: O(1)
   - Advantage: Completely eliminates the need to calculate factorials repeatedly.

2. On-the-fly Factorial Calculation (Current):
   - Time Complexity: O(D * 9) -> O(D) (since max digit is 9)
   - Space Complexity: O(1)
*/