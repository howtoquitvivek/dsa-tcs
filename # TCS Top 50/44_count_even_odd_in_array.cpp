#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {0,1,2,3,4,5,6};

    int even=0;
    int odd=0;
    
    // Logic: Iterate through array, check divisibility by 2.
    // Edge Case: `0` modulo 2 is 0, so it's correctly counted as even.
    // Edge Case: Negative numbers in C++ have a negative modulo. e.g., `-3 % 2` is `-1`, so `!= 0` condition correctly flags it as odd.
    for(int i=0; i<vec.size(); i++){
        if(vec[i]%2==0) ++even;
        if(vec[i]%2!=0) ++odd;
    }

    cout<<"Even: "<<even<<"\n"<<"Odd: "<<odd<<"\n";
    
    return 0;
}

/*
ALTERNATIVE APPROACHES:
1. Bitwise Approach (Optimal Math):
   - Logic: `if (vec[i] & 1) ++odd; else ++even;`
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Advantage: Bitwise AND is typically slightly faster than modulo division.

2. Using std::count_if (STL Approach):
   - Logic: `int even = count_if(vec.begin(), vec.end(), [](int x){ return x%2==0; });`
   - Time Complexity: O(N)
   - Space Complexity: O(1)

3. Modulo Arithmetic (Current):
   - Time Complexity: O(N)
   - Space Complexity: O(1)
   - Note: The current implementation checks `vec[i]%2` twice, `else ++odd;` would be more optimal.
*/