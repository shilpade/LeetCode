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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = head, *q = head;
        
        for(int i = 0 ;i < n ;i++){
        if (q == NULL)           //if n is greater than no of nodes available
        return head;
        q = q->next;
        }
       
       if(q == NULL)     //if n is equal to no of nodes available
       {
           head = head->next;
           return head;
       }
       
    
        //if n is smaller than the no of nodes available
        for( ; q->next != NULL ;q = q->next, p = p->next);
        p->next = p->next->next;
        
        return head;
    }
};
