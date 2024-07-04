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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode *curr = head->next, *mod_curr = head;
        while(curr != nullptr){
            if(curr->val == 0){
                ListNode *temp = new ListNode(sum);
                mod_curr->next = temp;
                mod_curr = mod_curr->next; 
                sum = 0;
            }
            else{
                sum += curr->val;
            }
            curr = curr->next;
        }
        return head->next;    
    }
};