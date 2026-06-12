#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Basic STL Stack - Last In First Out
    stack<int> st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout << "Top element is: " << st.top() << endl;
    
    st.pop();
    cout << "Top element after pop is: " << st.top() << endl;

    // cout << s.empty();
    // cout << s.size();
    
    return 0;
}