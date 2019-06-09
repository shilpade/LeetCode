/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *p = head, *q;
        if(head == NULL)
        return NULL;
        
        if(head -> next == NULL)
        return head;
        
        ListNode *next = head -> next;
        
        head -> next = swapPairs(next -> next);
        next ->next = head;
        
        return next;
    }
};