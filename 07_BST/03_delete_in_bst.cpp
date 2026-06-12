#include<iostream>
#include<vector>
#include<queue>
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

Node* insert(Node* root, int val){

    if(root == NULL){
        return new Node(val);
    }

    if(root->data < val){
        root->right = insert(root->right, val);
    }else{
        root->left = insert(root->left, val);
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

void level(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                return;
            }
        }

        cout<<curr->data<<" ";

        if(curr->left !=NULL){
            q.push(curr->left);
        }
        if(curr->right !=NULL){
            q.push(curr->right);
        }
    }
}

// BST Deletion:
//
// Case 1:
// Node has no children (leaf)
// -> delete node
//
// Case 2:
// Node has one child
// -> replace node with its child
//
// Case 3:
// Node has two children
// -> find inorder successor
// -> copy successor value into current node
// -> delete successor node
//
// Inorder Successor:
// Smallest value in the node's right subtree.

// The Inorder Successor of a node is:
// The next larger value in the BST.
// Remember:
// Inorder Traversal of a BST is always sorted.

// Example BST
//        8
//       / \
//      5   10
//     / \    \
//    3   6    11

// Inorder traversal:
// 3 5 6 8 10 11

// Now:
// Successor of 3 = 5
// Successor of 5 = 6
// Successor of 6 = 8
// Successor of 8 = 10
// Successor of 10 = 11
// Successor of 11 = NULL

Node* inorderSuccessor(Node* root){

    while(root->left != NULL){
        root = root->left;
    }

    return root;
}

Node* deleteNode(Node* root, int val){

    if(root == NULL){return NULL;}

    if(val < root->data){
        root->left = deleteNode(root->left, val);
    }
    else if(val > root->data){
        root->right = deleteNode(root->right, val);
    }
    else{

        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        else if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        else{
            Node* temp = inorderSuccessor(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        
    }

    return root;
}

int main(){

    vector<int> values = {8, 5, 10, 3, 6, 11};

    Node* root = NULL;
    for(int val : values){
        root = insert(root, val);
    }
    
    preorder(root);
    cout<<endl;
    
    level(root);
    cout<<endl;
    return 0;
}