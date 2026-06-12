#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Basic STL Queue - First In Last Out
    queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    
    cout << "Front element is: " << q.front() << endl;
    cout << "Back element is: " << q.back() << endl;
    
    q.pop();
    cout << "Front element after pop is: " << q.front() << endl;

    // cout << s.empty();
    // cout << s.size();
    
    return 0;
}
