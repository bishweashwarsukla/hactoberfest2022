/*
 Merge two linked list into one linked list
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode();
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
        if(list1->val >= list2->val){
            result = list2;
            result->next = mergeTwoLists(list1,list2->next);
        }
        else{
            result = list1;
            result->next = mergeTwoLists(list1->next,list2);
        } 
    return result;
        
    }
};
