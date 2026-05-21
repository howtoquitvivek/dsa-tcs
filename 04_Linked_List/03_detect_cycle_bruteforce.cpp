/*
========================================================
            DETECT CYCLE IN LINKED LIST
========================================================

Problem Statement:

Given the head of a singly linked list,
determine whether the linked list contains a cycle.

A cycle exists if some node in the linked list
can be reached again by continuously following
the next pointers.

Return:
- true  -> if cycle exists
- false -> otherwise

========================================================
                EXAMPLES
========================================================

Example 1:
Input:
1 -> 2 -> 3 -> 4
          ^    |
          |____|

Output:
true

Explanation:
Node 4 points back to node 3,
creating a cycle.

--------------------------------------------------------

Example 2:
Input:
1 -> 2 -> 3 -> NULL

Output:
false

Explanation:
No node points back to previous nodes.

========================================================
                CONSTRAINTS
========================================================

- Number of nodes can be between: [0,10^4]
- Node values can be positive or negative.

========================================================
                TRY SOLVING
========================================================

1. Hash Set Approach
   - store visited node addresses

2. Optimized Floyd Cycle Detection
   - slow and fast pointers

========================================================
                EXPECTED COMPLEXITIES
========================================================
Optimal Time Complexity: O(n)

Optimal Space Complexity: O(1)
========================================================
*/

#include<iostream>
#include<unordered_set>
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

//Create a set of Node* type
//If empty LL return false;
//Create a temp pointer to head
//Traverse and check if current Node address exists in set: If not then add it, if yes then return true
//Out of loop return false;

bool check_cycLL(Node* head){
    unordered_set<Node*> st; //NOT INTEGER SET

    if(head == NULL){return false;}

    Node* temp = head;

    while(temp != NULL){
        if(st.find(temp) != st.end()){return true;}
        st.insert(temp);
        temp = temp->next;
    }

    return false;
}

int main(){

    //cyclic ll
    Node* head = new Node(10);
    head->next = new Node(20);    
    head->next->next = new Node(30);    
    head->next->next->next = new Node(40);
    head->next->next->next->next = head->next->next;

    //standard ll
    Node* ll2 = new Node(10);
    ll2->next = new Node(20);    
    ll2->next->next = new Node(30);    
    ll2->next->next->next = new Node(40);

    printLL(ll2);

    check_cycLL(head)?cout<<"Cycle exists in head linked list\n":cout<<"No cycle in head\n";
    check_cycLL(ll2)?cout<<"Cycle exists in ll2 linked list\n":cout<<"No cycle in ll2\n";

    return 0;
}