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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1)
            return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        
        ListNode* current=dummy, *nex=dummy, *prev=dummy;
        int count=0;
        while(current->next!=NULL)
        {
            count++;
            current=current->next;
        }
        while(count>=k)
        {
            current=prev->next;
            nex=current->next;
            for(int i=1;i<k;i++)
            {
                current->next=nex->next;
                nex->next=prev->next;
                prev->next=nex;
                nex=current->next;
            }
            prev=current;
            count-=k;
        }
        return dummy->next;
    }
};