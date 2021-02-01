#include <iostream>

using namespace std;


class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* traverseNode = new ListNode;
        traverseNode = list1;
        
        ListNode* aPointer = new ListNode;
        ListNode* bPointer = new ListNode;

        while(traverseNode->next != NULL){
            if(traverseNode->val == a-1){
                aPointer = traverseNode;
            }
            traverseNode = traverseNode->next;
        }
        
        
        ListNode* temp = new ListNode();
        ListNode* prev = new ListNode();
        temp = aPointer->next;
        for(int i = a; i !=b; i++){
            prev = temp;
            temp = temp->next;
            delete(prev);
        }
        
        bPointer = temp->next;
        temp = list2;
        aPointer->next = temp;
        traverseNode = NULL;
        traverseNode = list1;
        while(traverseNode->next != NULL){
        traverseNode = traverseNode->next;
        }
        
        
        traverseNode->next = bPointer;
        
        return list1;
    }
};

//From https://leetcode.com/problems/merge-in-between-linked-lists/submissions/
//Run time was 356 ms faster than 80% of Answers