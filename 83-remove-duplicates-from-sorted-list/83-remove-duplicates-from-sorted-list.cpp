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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev=NULL,*res=head;
        while(head)
        {
            if(prev && prev->val==head->val)
            {
                prev->next=head->next;
            }
            else
            {
                prev=head;
            }
            head=head->next;
        }
        return res;
    }
};

