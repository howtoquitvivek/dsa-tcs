#include <iostream>

using namespace std;

class Queue {
private:
    int* arr;
    int frontIndex;
    int rearIndex;
    int capacity;
    int count;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = -1;
        count = 0;
    }

    // Destructor
    // Runs automatically when a Queue object is destroyed.
    //
    // We allocated memory dynamically using:
    //     arr = new int[capacity];
    //
    // Since the array lives on the heap, we must free it
    // when the object is no longer needed to avoid memory leaks.
    //
    // Rule:
    //     new[]  -> delete[]
    //
    // Example:
    //     Queue q(5);
    //     ...
    // } // q goes out of scope here
    //
    // At this point the destructor is called automatically
    // and the allocated array memory is released.
    ~Queue() {
        delete[] arr;
    }

    void push(int x) {
        if (count == capacity) {
            cout << "Queue Overflow\n";
            return;
        }
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = x;
        count++;
    }

    void pop() {
        if (count == 0) {
            cout << "Queue Underflow\n";
            return;
        }
        frontIndex = (frontIndex + 1) % capacity;
        count--;
    }

    int front() {
        if (count == 0) return -1;
        return arr[frontIndex];
    }

    bool empty() {
        return count == 0;
    }
};

int main() {
    Queue myQueue(5);
    myQueue.push(10);
    myQueue.push(20);
    
    cout << "Front element is: " << myQueue.front() << endl;
    myQueue.pop();
    cout << "Front element is: " << myQueue.front() << endl;
    
    return 0;
}
