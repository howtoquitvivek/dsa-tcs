```cpp id="jlwm7t"
#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    ============================================
                UNORDERED MAP
    ============================================

    unordered_map stores data in:
    key -> value format

    Example:
    5 -> 3

    Means:
    key 5 appeared 3 times.

    Average Time Complexity:
    Insert/Search/Delete -> O(1)

    Syntax:
    unordered_map<key_datatype, value_datatype>
    */

    unordered_map<int, int> mp;

    vector<int> vec = {1,2,2,3,3,3,4,5,5};

    /*
    Frequency counting

    mp[x]++;

    If x is not present:
    Creates key with value 0 first.

    Then increments.

    Example:
    mp[3]++;

    First time:
    3 -> 1

    Second time:
    3 -> 2
    */

    for(int x : vec){
        mp[x]++;
    }

    cout << "Frequency Map:\n";

    /*
    x.first  -> key
    x.second -> value
    */

    for(auto x : mp){
        cout << x.first << " -> " << x.second << "\n";
    }

    cout << "\n";

    /*
    ============================================
                FINDING ELEMENT
    ============================================

    mp.find(key)

    If key exists:
    returns iterator

    Else:
    returns mp.end()
    */

    if(mp.find(3) != mp.end()){
        cout << "3 exists\n";
    }else{
        cout << "3 does not exist\n";
    }

    cout << "\n";

    /*
    ============================================
                UNORDERED SET
    ============================================

    Stores only UNIQUE elements.

    Duplicate values are ignored.

    Average operations:
    O(1)
    */

    unordered_set<int> st;

    for(int x : vec){
        st.insert(x);
    }

    cout << "Unique elements:\n";

    for(int x : st){
        cout << x << " ";
    }

    cout << "\n\n";

    /*
    ============================================
                    PREFIX SUM
    ============================================

    Prefix sum stores cumulative sums.

    Example:

    arr = [1,2,3,4,5]

    prefix:
    [1,3,6,10,15]

    Because:

    1
    1+2=3
    1+2+3=6
    1+2+3+4=10
    1+2+3+4+5=15
    */

    vector<int> arr = {1,2,3,4,5};

    vector<int> prefix(arr.size());

    /*
    First prefix element is same as first array element.
    */

    prefix[0] = arr[0];

    /*
    Formula:

    prefix[i] = prefix[i-1] + arr[i]
    */

    for(int i=1; i<arr.size(); i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    cout << "Prefix Sum Array:\n";

    for(int x : prefix){
        cout << x << " ";
    }

    cout << "\n\n";

    /*
    ============================================
            RANGE SUM USING PREFIX SUM
    ============================================

    Sum from index l to r:

    prefix[r] - prefix[l-1]

    Example:

    arr = [1,2,3,4,5]

    prefix = [1,3,6,10,15]

    Sum from index 1 to 3:
    2+3+4 = 9

    Formula:
    prefix[3] - prefix[0]
    = 10 - 1
    = 9
    */

    int l = 1;
    int r = 3;

    int rangeSum = prefix[r] - prefix[l-1];

    cout << "Sum from index "
         << l << " to "
         << r << " = "
         << rangeSum << "\n";

    return 0;
}
```
