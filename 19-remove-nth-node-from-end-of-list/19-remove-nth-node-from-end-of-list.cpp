/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=head;
        int count=0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        
        if(count==n)
        {
            head=head->next;
            return head;
        }
        
        int k=count-n;
        ListNode* temp=head;
        count=1;
        while(count!=k)
        {
            temp=temp->next;
            count++;
        }
        ListNode *var = temp->next;
        temp->next = temp->next->next;
        delete(var);
        
        return head;
    }
};