#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int key;
    struct node *left, *right;
};
 
struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* leftMost(struct node* root)
{
    if (!root)
        return NULL;
    while (root->left)
        root = root->left;
    return root;
}

struct node* deleteNode(struct node* root)
{

    if (!root->left) {
        struct node* child = root->right;
        root = NULL;
        return child;
    }
    else if (!root->right) {
        struct node* child = root->left;
        root = NULL;
        return child;
    }
 

    struct node* next = leftMost(root->right);
    root->key = next->key;
    root->right = deleteNode(root->right);
 
    return root;
}
 

struct node* removeRange(struct node* node, int low, int high)
{
 
    if (!node)
        return NULL;
 
    node->left = removeRange(node->left, low, high);
    node->right = removeRange(node->right, low, high);
 
    
    if (node->key >= low && node->key <= high)
        return deleteNode(node);
    return node;
}
 
int count =0;


struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
 
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    return node;
}

void inorder(struct node* root)
{
    if (root) {
        inorder(root->left);
        printf("%d ",root->key);
        inorder(root->right);
    }
}
 
 
int main()
{
    
    struct node* root = NULL;
    int arr[12];
    for(int i = 0 ;i<12;i++)
    {
        scanf("%d",&arr[i]);
    }
    root = insert(root, arr[0]);
    for(int i = 1; i<12;i++)
    {
        insert(root,arr[i]);
    }
    int low,high;
    scanf("%d %d",&low,&high);
    root = removeRange(root, low, high);
    inorder(root);
    
    return 0;
}
