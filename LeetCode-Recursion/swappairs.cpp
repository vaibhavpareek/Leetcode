class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || head->next==NULL)
            return head;
        ListNode *post= swapPairs(head->next->next);
        ListNode *res = head->next;
        res->next = head;
        head->next = post;
        return res;
        
    }
};