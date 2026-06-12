// Problem:
// Build a Binary Search Tree (BST) from a given list of values.
//
// BST Property:
// Left Subtree  < Root
// Right Subtree > Root
//
// Approach:
//
// 1. Start with an empty tree.
//
// 2. Insert elements one by one.
//
// 3. For each value:
//
//    a. If root is NULL,
//       create a new node and return it.
//
//    b. If value < root->data,
//       insert into the left subtree.
//
//    c. If value > root->data,
//       insert into the right subtree.
//
// 4. Repeat until all values are inserted.
//
// Example:
//
// Input:
// 8 5 10 3 6 11
//
// Insert 8
//
//      8
//
// Insert 5
//
//      8
//     /
//    5
//
// Insert 10
//
//      8
//     / \
//    5  10
//
// Insert 3
//
//       8
//      / \
//     5  10
//    /
//   3
//
// Insert 6
//
//       8
//      / \
//     5  10
//    / \
//   3   6
//
// Insert 11
//
//       8
//      /  \
//     5    10
//    / \     \
//   3   6     11
//
// Final BST constructed.
//
// Key Observation:
//
// For every insertion:
//
// value < root->data  -> go left
// value > root->data  -> go right
//
// Eventually a NULL position is found,
// and the new node is inserted there.

#include<iostream>
#include<vector>
using namespace std;

// Unlike a normal Binary Tree, a BST is usually built
// from a list of values rather than preorder + null markers.
//
// Example:
//
// Values:
// 8 5 10 3 6 11
//
// We do not know the tree structure beforehand.
// The BST property determines where each value goes.
//
// BST Property:
// Left Subtree  < Root
// Right Subtree > Root
//
// Therefore we insert values one by one:
//
// insert(8)
// insert(5)
// insert(10)
// insert(3)
// insert(6)
// insert(11)
//
// During insertion, we traverse the tree and find
// the correct position according to the BST property.
//
// This is why a BST requires an insert() function
// to build the tree.

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val){

    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    
    return root;
}

void preorder(Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){

    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){

    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

    vector<int> values = {8, 5, 10, 3, 6, 11};

    Node* root = NULL;
    // root = insert(root, 8);
    // root = insert(root, 5);
    // root = insert(root, 10);
    // root = insert(root, 3);
    // root = insert(root, 6);
    // root = insert(root, 11);
    for(int val : values){
        root = insert(root, val);
    }

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}