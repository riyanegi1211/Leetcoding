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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* collide=head;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(slow!=collide)
                {
                    slow=slow->next;
                    collide=collide->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};