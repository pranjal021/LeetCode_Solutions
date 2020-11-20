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
    ListNode* removeElements(ListNode* head, int val) {
        
        while(head!=NULL && head->val == val) head = head->next;
        
        if(!head) return NULL;
        
        ListNode* curr = head->next;
        ListNode* prev = head;
        
        while(curr){
            if(curr->val == val){
                prev->next = curr->next;
                curr = curr->next;
                continue;
            }
            
            curr = curr->next;
            prev = prev->next;
            
        }
        
        return head;
    }
};
