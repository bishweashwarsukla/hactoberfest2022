//
// Created by Sumit Suman on 25-10-2021.
//

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node* root) {
    if(root == NULL) {
        return;
    }
    cout << root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);
}

void postorder(struct Node* root) {
    if(root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";
}

int main()
{

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(8);
    //root->left->left->right = new Node(8);
    root->left->left->right->left = new Node(9);
    root->right->left = new Node(5);
    root->right->right = new Node(6);

    cout << "Preorder: " ,preorder(root);
    cout << endl;
    cout << "Inorder: ",inorder(root);
    cout << endl;
    cout << "postorder: ", postorder(root);


    return 0;
}




/*
 *       1
 *     /   \
 *    2     3
 *   / \   / \
 *  4   5 6   7
 */