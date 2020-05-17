// Solution:
// Technique : Set only odd elements , even will automatically get set
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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
	{
		return head;
	}
	ListNode *odd = head;
	ListNode *fix=head->next;
	ListNode *even = head->next;
	ListNode *temp;
	while(even!=NULL && even->next!=NULL)
	 {
	 	odd->next=even->next;
	 	odd = odd->next;
	 	temp=odd->next;
	 	odd->next=fix;
	 	even->next=temp;
	 	even = even->next;
	 }
	return head;
        
    }
};