/**
 Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
 * **/


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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // if (l1->next == NULL) {
        //     return l2;
        // }
        // else if (l2->next == NULL) {
        //     return l1;
        // }
        // else if (l1->val < l2->val) {
        //     l1->next = mergeTwoLists(l1->next, l2);
        //     return l1;
        // }
        // else {
        //     l2->next = mergeTwoLists(l1, l2->next);
        //     return l2;
        // }
        ListNode *dummy = new ListNode(0);
        ListNode *cur = dummy;
        while(l1 && l2)
        {
            if(l1->val <l2->val)
            {
                cur->next = l1;
                l1 = l1->next;
            }
            else{
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        cur->next = l1 ? l1 :l2; //Deal with situations where l1 or l2 has a surplus
        return dummy->next;
    }
};