#include<bits/stdc++.h>
using namespace std;

/*
========================================================
                LINKED LIST BASICS
========================================================

Linked List:
A linear data structure where each node stores:

1. data
2. address of next node

Structure:

[data | next]

Example:

10 -> 20 -> 30 -> NULL

========================================================
                WHY LINKED LIST?
========================================================

Arrays:
- fixed size
- contiguous memory

Linked Lists:
- dynamic size
- non-contiguous memory

========================================================
                IMPORTANT TERMS
========================================================

Node:
Single element of linked list.

Head:
Pointer to first node.

Tail:
Last node.

NULL:
Marks end of linked list.

========================================================
                NODE CLASS
========================================================
*/

class Node{

public:

    int data;
    Node* next;

    // constructor
    Node(int val){

        data = val;
        next = NULL;
    }
};


/*
========================================================
                PRINT LINKED LIST
========================================================
*/

void printList(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->data << " -> ";

        temp = temp->next;
    }

    cout << "NULL\n";
}


/*
========================================================
                INSERT AT HEAD
========================================================

New node becomes first node.

*/

void insertAtHead(Node* &head, int val){

    Node* newNode = new Node(val);

    newNode->next = head;

    head = newNode;
}


/*
========================================================
                INSERT AT TAIL
========================================================
*/

void insertAtTail(Node* &head, int val){

    Node* newNode = new Node(val);

    // empty list
    if(head == NULL){

        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){

        temp = temp->next;
    }

    temp->next = newNode;
}


/*
========================================================
                DELETE FIRST NODE
========================================================
*/

void deleteHead(Node* &head){

    if(head == NULL){
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;
}


/*
========================================================
                SEARCH ELEMENT
========================================================
*/

bool search(Node* head, int target){

    Node* temp = head;

    while(temp != NULL){

        if(temp->data == target){
            return true;
        }

        temp = temp->next;
    }

    return false;
}


/*
========================================================
                COUNT NODES
========================================================
*/

int length(Node* head){

    int count = 0;

    Node* temp = head;

    while(temp != NULL){

        count++;

        temp = temp->next;
    }

    return count;
}

/*
========================================================
                        MAIN
========================================================
*/

int main(){

    Node* head = NULL;

    /*
    ====================================================
                    INSERTIONS
    ====================================================
    */

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);

    cout << "Initial List:\n";

    printList(head);

    /*
    ====================================================
                    INSERT AT HEAD
    ====================================================
    */

    insertAtHead(head, 5);

    cout << "\nAfter inserting at head:\n";

    printList(head);

    /*
    ====================================================
                    DELETE HEAD
    ====================================================
    */

    deleteHead(head);

    cout << "\nAfter deleting head:\n";

    printList(head);

    /*
    ====================================================
                    SEARCH
    ====================================================
    */

    cout << "\nSearch 20:\n";

    if(search(head, 20)){
        cout << "Found\n";
    }else{
        cout << "Not Found\n";
    }

    /*
    ====================================================
                    LENGTH
    ====================================================
    */

    cout << "\nLength:\n";

    cout << length(head) << "\n";

    return 0;
}