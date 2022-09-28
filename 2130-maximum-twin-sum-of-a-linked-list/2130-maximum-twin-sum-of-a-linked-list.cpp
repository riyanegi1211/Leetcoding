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
    int pairSum(ListNode* head) {
        vector<int>ans;
        ListNode *temp = head;
        while(temp)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int sum=INT_MIN;
        int i=0,j=ans.size()-1;
        while(i<j)
        {
            sum=max(sum,ans[i++]+ans[j--]);
        }
        return sum;
    }
};
