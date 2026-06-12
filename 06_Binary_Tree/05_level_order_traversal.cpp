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

// print from left to right on each level
// print each level in next line
// use NULL to track end of level

// use queue to push root and pop it (this means it is printed)
// next on pop add its left and right children in the queue and repeat this

// also to track the next line, push a NULL together with root
// on its removal check if the queue is empty
// if it is then it means it was the last element so break
// if not it means there are more element and only current level is printed so add a next line
// add the NULL back in the queue 
// (the one for checking is the temporary curr and the original NULL was removed)
// make sure to continue because if we don't the rest of the code will try to read left and right of this NULL

void levelOrder(Node* root){

    if(root == NULL){ return; }

    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    
}

int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    levelOrder(root);

    cout<<endl;

    return 0;
}