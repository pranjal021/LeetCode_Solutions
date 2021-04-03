class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* n;
        
        while(curr != NULL){
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        
        return prev;
        
    }
};
