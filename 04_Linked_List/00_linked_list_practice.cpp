#include<iostream>
using namespace std;

//Node blueprint
class Node{
    //Access outside
    public:
    int data;
    Node* next; //Links to another node to make link in non contigous memory

    //Constructor takes value and creates a new node with that value as data and links next to NULL(end)
    Node(int val){
        data = val;
        next = NULL;
    }
};

void printLL(Node* head){
    //Create a temp node that holds head
    Node* temp = head;

    //Until temp is NULL (we will increment it to go till last ie. NULL)
    while(temp != NULL){
        cout<< temp->data <<" -> ";
        temp = temp->next;
    }

    //Print NULL seperately at the end
    cout<<"NULL\n";
}

void insertHeadLL(Node* &head, int val){
    //Create a new node with a value
    Node* newNode = new Node(val);
    //Set current head as its next
    newNode->next = head;
    //Set the original head pointer to point at newNode, so that now newNode is head
    head = newNode;
}

void insertTailLL(Node* &head, int val){
    //Create new node with value
    Node* newNode = new Node(val);

    //If head is null (empty list), change current head pointer to new node, so now it becomes the head
    if(head == NULL){
        head = newNode;
        return;
    }

    //Create a temp pointing to head
    Node* temp = head;

    //Go to last node
    while(temp != NULL){
        temp = temp->next;
    }

    //Change pointer of last node to point to new node
    temp->next = newNode;
}

void deleteHeadLL(Node* &head){
    //If head points to NULL, list is empty and return
    if(head == NULL){
        return;
    }

    //Else create a temp poiniting to head
    Node* temp = head;

    //Move head to point next
    head = head->next;

    //DONT delete head as it has been updated to the second element
    //Delete temp as it still points to first element (old head)
    delete temp;

}

bool searchLL(Node* head, int target){
    //Return if empty
    if(head == NULL){
        return false;
    }

    Node* temp = head;
    while(temp != NULL){
        //Compare temp's data with target
        if(temp->data == target){
            //If found return true
            return true;
        }
        //Else update to next element
        temp = temp->next;
    }
    //Loop exits means not found so return false
    return false;
}

int countLL(Node* head){
    if(head ==  NULL){return 0;}

    Node* temp = head;
    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

int main(){

    //Create Single and link them later
    Node* N1 = new Node(1);
    Node* N2 = new Node(2);
    Node* N3 = new Node(3);
    N1->next = N2;
    N2->next = N3;

    //Create linked
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
 
    printLL(N1);
    printLL(head);

    return 0;
}