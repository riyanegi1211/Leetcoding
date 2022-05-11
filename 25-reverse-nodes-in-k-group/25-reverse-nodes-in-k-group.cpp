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
    int length(ListNode*head)
    {
        int len=0;
        while(head!=NULL)
        {
            len++;
            head=head->next;
        }
        return len;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)
            return NULL;
        int len=length(head);
        int itr=len;
        ListNode* prev=NULL;
        ListNode* current=head;
        ListNode* next=NULL;
        
        int count=0;
        while(current!=NULL && count<k)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
            itr--;
        }
        if(next!=NULL && itr>=k)
        {
            head->next=reverseKGroup(next,k);
        }
        else
        {
            head->next=next;
            return prev;
        }
        return prev;
    }
};
