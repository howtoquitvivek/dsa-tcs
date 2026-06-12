#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> vec;

public:
    void push(int x) {
        vec.push_back(x);
    }

    void pop() {
        if (!vec.empty()) {
            vec.pop_back();
        }
    }

    int top() {
        if (!vec.empty()) {
            return vec.back();
        }
        return -1;
    }

    bool empty() {
        return vec.empty();
    }
};

int main() {
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    
    cout << "Top element is: " << myStack.top() << endl;
    myStack.pop();
    cout << "Top element is: " << myStack.top() << endl;
    
    return 0;
}
