/*
========================================================
                MIDDLE NODE OF LINKED LIST
========================================================

Problem Statement:

Given the head of a singly linked list,
return the middle node of the linked list.
If there are two middle nodes,
return the second middle node.

========================================================
                EXAMPLES
========================================================
Example 1:
Input:
1 -> 2 -> 3 -> 4 -> 5 -> NULL

Output:
3

--------------------------------------------------------
Example 2:
Input:
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL

Output:
4

========================================================
                CONSTRAINTS
========================================================

- Number of nodes can be between: [1-100]
- Node values can be positive or negative.

========================================================
                TRY SOLVING
========================================================

1. Brute Force
   - count total nodes
   - traverse again to middle

2. Optimized Approach
   - slow and fast pointers

*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

// Create two pointers, namely fast and slow, both pointing head.
// Fast moves 2 steps and Slow moves 1, so when Fast reaches end ~ Slow is at middle.
// Condition should be Fast != NULL && Fast->next != NULL 
// (since fast needs next two steps so they both need to exist and not be NULL)

Node* middleNode(Node* head){
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

// Time : O(n)
// Space : O(1)

int main(){

    Node* head = new Node(10);
    head->next = new Node(20);    
    head->next->next = new Node(30);    
    head->next->next->next = new Node(40);

    printLL(head);
    cout<<"Middle Node Data: "<<middleNode(head)->data<<"\n";
    
    
    return 0;
}