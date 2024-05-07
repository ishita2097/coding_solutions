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
    ListNode* reverseIt(ListNode* head){
        ListNode* curr=head, *nxt=head->next, *temp;
        while(nxt!=nullptr){
            temp = nxt->next;
            nxt->next=curr;
            curr=nxt;
            nxt=temp;        
        }
        head->next=nullptr;
        head=curr;

        return head;
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverseIt(head);
        
        int carry=0, mul;
        ListNode *temp = head;
        while(true){
            mul = (temp->val)*2 + carry;
            temp->val = (mul%10);
            carry = mul/10;
            if(temp->next!=nullptr)
                temp = temp->next;
            else
                break;
        }
        
        if(carry){
            ListNode *cy = new ListNode(carry);
            temp->next = cy;
        }
        head = reverseIt(head);
        return head;
    }
};