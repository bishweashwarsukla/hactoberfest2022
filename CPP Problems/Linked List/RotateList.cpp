/*
 Given the head of a linked list, rotate the list to the right by k places.
 Only the function to solve this problem (not the whole code)
*/
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    //Rotate List
    long long int length(ListNode* head){
        long long int c=0;
        if(!head) return 0;
        while(head){
            head = head->next;
            c++;
        }
        return c;
    }
    
    ListNode* rotate(ListNode* head){
        if(!head) return NULL;
        ListNode *curr = head;
        ListNode *node = head;
        if(length(node) == 1) return node;
        ListNode *prev;
        while(curr->next){
            prev = curr;
            curr = curr->next;
        }
        ListNode *temp = new ListNode(curr->val);
        delete(curr);
        prev->next = NULL;
        temp->next = head;
        return temp;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp;
        ListNode *node = head;
        int l = length(node);
        int rem;
        if(l!=0) rem = k%l;
        else rem = k;
        for(long long int i=0;i<rem;i++){
            head = rotate(head);
        }
        return head;
        
    }
};
