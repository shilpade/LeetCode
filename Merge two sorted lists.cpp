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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = NULL, *head = NULL;
        if(l1 == NULL)
        return l2;
        
        if(l2 == NULL)
        return l1;
        
        l3 = new ListNode(0);
        head = l3;
        
        while(l1 && l2)
        {
        if((l1 -> val) < (l2 -> val))
        {
          l3 -> next = l1;
          l1 = l1 -> next;
        }
        else
        {
           l3 -> next = l2;
           l2 = l2 -> next;
        }
        l3 = l3 -> next;
        
        }  //while loop ends.. now either l1 or l2 is left
        l3 -> next = (l1 ? l1 : l2);
        return head->next;
        
    }
};