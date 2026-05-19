/*
========================================================
            REVERSE LINKED LIST THEORY
========================================================

Problem:
Reverse a singly linked list.

Example:

Original:
10 -> 20 -> 30 -> NULL

Reversed:
30 -> 20 -> 10 -> NULL

========================================================
                CORE IDEA
========================================================

Every node points to next node.

To reverse list:
Change direction of links.

Example:
10 -> 20

becomes:
10 <- 20

========================================================
                IMPORTANT POINTERS
========================================================

We mainly use 3 pointers:

1. prev
   -> previous node

2. curr
   -> current node

3. nextNode
   -> stores next node temporarily

========================================================
                WHY nextNode NEEDED?
========================================================

Because after reversing link:

curr->next = prev

original next node gets lost.

So before changing link,
store next node safely.

========================================================
                STEP BY STEP
========================================================

Original:

NULL <- 10 -> 20 -> 30

Step 1:
Store next node.

nextNode = curr->next

Step 2:
Reverse current link.

curr->next = prev

Step 3:
Move prev forward.

prev = curr

Step 4:
Move curr forward.

curr = nextNode

Repeat until curr becomes NULL.

========================================================
                VISUAL DRY RUN
========================================================

Initial:

prev = NULL
curr = 10

10 -> 20 -> 30 -> NULL

--------------------------------------------------------

Iteration 1:

nextNode = 20

Reverse:
10 -> NULL

Move:
prev = 10
curr = 20

--------------------------------------------------------

Iteration 2:

nextNode = 30

Reverse:
20 -> 10 -> NULL

Move:
prev = 20
curr = 30

--------------------------------------------------------

Iteration 3:

nextNode = NULL

Reverse:
30 -> 20 -> 10 -> NULL

Move:
prev = 30
curr = NULL

Loop ends.

========================================================
                IMPORTANT CONCEPT
========================================================

At every step:

save next
reverse link
move pointers

========================================================
                TIME COMPLEXITY
========================================================

O(n), because every node is visited once.

========================================================
                SPACE COMPLEXITY
========================================================

O(1), because no extra data structure is used.

========================================================
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

void printList(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->data << " -> ";

        temp = temp->next;
    }

    cout << "NULL\n";
}

Node* reverseList(Node* head){

    Node* prev = NULL;

    Node* curr = head;

    while(curr != NULL){

        // save next node
        Node* nextNode = curr->next;

        // reverse link
        curr->next = prev;

        // move prev
        prev = curr;

        // move curr
        curr = nextNode;
    }

    // prev becomes new head
    return prev;
}

int main(){

    Node* head = new Node(10);

    head->next = new Node(20);

    head->next->next = new Node(30);

    cout << "Original List:\n";

    printList(head);

    head = reverseList(head);

    cout << "\nReversed List:\n";

    printList(head);

    return 0;
}