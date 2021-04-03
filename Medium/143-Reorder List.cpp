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
    
    ListNode* getMid(ListNode* head){
        ListNode* slow  = head;
        ListNode* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        
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
    
    void reorderList(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return;
        
        ListNode* mid = getMid(head);
        ListNode* nhead = mid->next;
        
        mid->next = NULL;
        
        nhead = reverse(nhead);
        
        ListNode* c1 = head;
        ListNode* c2 = nhead;
        ListNode* f1, *f2;
        
        while(c1 != NULL && c2 != NULL){
            f1 = c1->next;
            f2 = c2->next;
            
            c1->next = c2;
            c2->next = f1;
            
            c1 = f1;
            c2 = f2;
        }
        
        return;
        
    }
};
