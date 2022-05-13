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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        ListNode* temp=new ListNode(-1);
        ListNode* ptr3=temp;
        
        while(ptr1!=NULL && ptr2!=NULL)
        {
            if(ptr1->val<ptr2->val)
            {
                ptr3->next=ptr1;
                ptr1=ptr1->next;
            }
            else
            {
                ptr3->next=ptr2;
                ptr2=ptr2->next;
                
            }
            ptr3=ptr3->next;
        }
        while(ptr1!=NULL)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
            ptr3=ptr3->next;
        }
        while(ptr2!=NULL)
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
            ptr3=ptr3->next;
        }
        return temp->next;
    }
};