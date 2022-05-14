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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        
        int i=0;
        ListNode* ptr=head;
        while(ptr)
        {
            ptr=ptr->next;
            i++;
        }
        i/=2;
        i--;
        ptr=head;
        while(i)
        {
            ptr=ptr->next;
            i--;
        }
        ptr->next=ptr->next->next;
        return head;
    }
};   

