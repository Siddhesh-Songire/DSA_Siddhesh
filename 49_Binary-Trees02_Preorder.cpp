//* Preorder => root-left-right
// All approches - https://leetcode.com/problems/binary-tree-inorder-traversal/solution/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* node){
    if(node == NULL) return;

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node* node){
    if(node == NULL){
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(Node* node){
    if(node == NULL){
        return;
    }
    inorder(node->left);
    inorder(node->right);
    cout<<node->data<<" ";
}

int main (){
    Node* root = new Node(1);

    root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);

/* 
                1
            /     \
           2       3
          / \     / \
         4  NULL NULL NULL
        / \
     NULL NULL

    */
cout<<"Pre-order - ";
preorder(root);

cout<<"\nIn-order - ";
inorder(root);

cout<<"\nPost-order - ";
postorder(root);

}

/* 
* Leetcode
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> v;
        inorder(root, v);
        return v;
    }
    
    void inorder(TreeNode* root, vector<int> &v)
    {
        if(root == NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);

    }
};
*/