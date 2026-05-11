#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"\n";

    // Logic: Outer loop runs from `i=0` to `n`. Inner loop runs from `j=i+1` to `n`.
    // Example: For n=3
    // i=0 -> j goes 1 to 3 -> prints 3 'x'
    // i=1 -> j goes 2 to 3 -> prints 2 'x'
    // i=2 -> j goes 3 to 3 -> prints 1 'x'
    // i=3 -> j goes 4 to 3 -> prints 0 'x'
    // Result is an inverted right-angled triangle.
    // Edge Case: If n <= 0, the loops handle it without crashing, printing nothing.
    for(int i=0; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            cout<<"x";
        }
        cout<<"\n";
    }
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Decrementing Inner Loop:
   - Logic: 
     ```cpp
     for(int i = n; i > 0; i--) {
         for(int j = 0; j < i; j++) {
             cout << "x";
         }
         cout << "\n";
     }
     ```
   - Time Complexity: O(N^2)
   - Space Complexity: O(1)
   - Advantage: The loop variables more clearly map to "print `i` stars on line `n-i`".

2. Using string constructor:
   - Logic: `for(int i = n; i > 0; i--) { cout << string(i, 'x') << "\n"; }`
   - Time Complexity: O(N^2) (string creation is O(K) where K is length)
   - Space Complexity: O(N) for string creation at each step.
*/