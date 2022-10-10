#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
    Node(Node* prev, int val){
        Node *temp;
        temp->data = val;
        temp->next = NULL;
        prev->next = temp;
    }
};

void traversal(Node *head){
        while(head){
            cout << head->data << " ";
            head = head->next;
        }
}

int main(){
    Node *head = new Node(10);
    Node *first = new Node(head, 20);
    Node *second = new Node(first, 25);
    Node *third = new Node(second, 35);
    Node *fourth = new Node(third, 40);
    Node *fifth = new Node(fourth, 50);
    traversal(head);
    return 0;
}
