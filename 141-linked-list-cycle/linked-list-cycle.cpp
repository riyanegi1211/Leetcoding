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
    bool hasCycle(ListNode *head) {
        ListNode* tortoise = head;
        ListNode* hare = head;
        while(hare!=NULL && hare->next!=NULL){
            hare=hare->next->next;
            tortoise=tortoise->next;

            if(hare==tortoise)
                return true;
        }
        return false;
    }
};