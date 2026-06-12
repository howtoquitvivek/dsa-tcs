// Problem:
// Find the minimum depth of a binary tree.
//
// Minimum Depth:
// Number of nodes in the shortest path
// from the root node to the nearest leaf node.
//
// A leaf node is a node with:
// left == NULL && right == NULL
//
// Example:
//
//         1
//        / \
//       2   3
//          / \
//         4   5
//
// Paths:
//
// 1 -> 2       (depth = 2)
// 1 -> 3 -> 4 (depth = 3)
// 1 -> 3 -> 5 (depth = 3)
//
// Minimum Depth = 2
//
// Approach:
//
// 1. If root is NULL,
//    return 0.
//
// 2. If root is a leaf node,
//    return 1.
//
// 3. If left subtree is missing,
//    minimum depth must come from right subtree.
//
//    return minDepth(right) + 1;
//
// 4. If right subtree is missing,
//    minimum depth must come from left subtree.
//
//    return minDepth(left) + 1;
//
// 5. If both subtrees exist,
//    take the smaller depth.
//
//    return min(leftDepth, rightDepth) + 1;
//
// Key Observation:
//
// We cannot directly write:
//
// min(minDepth(left), minDepth(right)) + 1
//
// because one subtree may be NULL.
//
// Example:
//
//       1
//      /
//     2
//
// leftDepth  = 1
// rightDepth = 0
//
// min(1,0)+1 = 1   ❌ Wrong
//
// Actual Minimum Depth:
//
// 1 -> 2
//
// Answer = 2
//
// Therefore, when one subtree is NULL,
// we must ignore it and use the non-NULL subtree.



#include<iostream>
#include<vector>
using namespace std;

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

static int idx = -1;
Node* buildTree(vector<int>& preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// root-left-right
void preOrder(Node* root){

    if(root == NULL ){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    
}

int minDepth(Node* root){

    if(root == NULL){
        return 0;
    }

    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    if(root->left == NULL){
        return minDepth(root->right) + 1;
    }

    if(root->right == NULL){
        return minDepth(root->left) + 1;
    }

    return min(
        minDepth(root->left),
        minDepth(root->right)
    ) + 1;
}

int main(){

    // vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    // vector<int> preorder = {NULL,-1,-1};
    vector<int> preorder = {
        1,
        2,
        4,-1,-1,
        -1,
        3,
        -1,
        5,
        -1,
        6,-1,-1
    };

    Node* root = buildTree(preorder);

    preOrder(root);
    cout<<endl;

    cout<<"Min depth: "<<minDepth(root)<<endl;
    
    return 0;
}