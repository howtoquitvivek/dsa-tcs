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
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
    return head;
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

/*
========================================================
        REVERSE LINKED LIST KI IMPORTANT THEORY
========================================================

Starting me confusion hota hai kyuki naturally lagta hai:

"Next node ko reverse karna hai"

Lekin actual linked list reversal aise nahi hota.

========================================================
                GALAT SOCH
========================================================

Agar socho:

nextNode->next = curr

toh hum future node ko reverse karne ki
koshish kar rahe hain.

Lekin linked list reversal ka main idea hai:

CURRENT node ka direction ulta karna.

========================================================
                SAHI SOCH
========================================================

Hamesha socho:

"Current node ko previous node ki taraf point karwana hai"

Main operation:

curr->next = prev

Yehi actual reversal step hai.

========================================================
                SABSE IMPORTANT REALIZATION
========================================================

Initially:

prev = NULL
curr = head

Example:

10 -> 20 -> 30 -> NULL

First iteration me:

curr = 10
prev = NULL

Toh:

curr->next = prev

banega:

10 -> NULL

Ye bahut important hai kyuki:

10 reversed linked list ka LAST node banega.

========================================================
                nextNode KYU CHAHIYE?
========================================================

Original:

10 -> 20

Agar directly kar diya:

10 -> NULL

toh 20 ka address permanently lost ho jayega.

Isliye reverse karne se pehle:

next node ko save karte hain.

Example:

nextNode = curr->next

Ab 20 safely stored hai.

========================================================
                POINTER MOVEMENT
========================================================

Link reverse karne ke baad:

prev = curr
curr = nextNode

Isse traversal original linked list me
aage badhta rehta hai.

========================================================
                IMPORTANT INSIGHT
========================================================

curr naturally original linked list ke end tak
move karta rehta hai.

Finally:

curr == NULL

iska matlab:
saare nodes process ho gaye.

Aur us moment pe:

prev new head ban jata hai
reversed linked list ka.

========================================================
                MENTAL MODEL
========================================================

Har step pe:

1. next save karo
2. current link reverse karo
3. pointers aage move karo

Core pattern:

save next
reverse current
move forward

========================================================
*/