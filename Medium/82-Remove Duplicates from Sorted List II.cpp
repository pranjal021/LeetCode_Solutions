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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* n = curr->next;
        
        while(n){
            if(curr->val == n->val){
                
                while(n && curr->val == n->val){
                    n = n->next;
                }
                if(!prev) head = n;
                else prev->next = n;
                
            }else{
                prev = curr;
            }
            curr = n;
            if(n) n = n->next;
        }
        
        return head;
    }
};
