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

bool loop_detection(Node *head){
    if(!head) return false;
    Node *slow = head, *fast = head;
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}

int main(){
    Node *head = new Node(10);
    Node *first = new Node(head, 20);
    Node *second = new Node(first, 25);
    Node *third = new Node(second, 35);
    Node *fourth = new Node(third, 40);
    Node *fifth = new Node(fourth, 50);
    if(loop_detection(head)) cout << "There is a loop in given linked list";
    else cout << "There's no loop in given linked list";
    return 0;
}
