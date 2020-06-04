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
    void deleteNode(ListNode* node) {
    
        ListNode* k=node->next;
                  node->val=k->val;
                  node->next=k->next;
        

        
        
    }
};