/**
 输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

 

示例 1：

输入：head = [1,3,2]
输出：[2,3,1]
 

限制：

0 <= 链表长度 <= 10000
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
    // vector<int> result;
    vector<int> reversePrint(ListNode* head) {
        // 方法一
        // vector<int> result;
        // while(head != NULL){
        //     result.insert(result.begin(),head->val);
        //     head = head->next;
        // }
        
        // 方法二 
        vector<int> result;
        while(head!=NULL)
        {
            result.push_back(head->val);
            head=head->next;
        }
        reverse(result.begin(),result.end());

        // 方法三 递归
        // if(head == NULL) return result;
        // reversePrint(head->next);
        // result.push_back(head->val);
        return result;
    }
};