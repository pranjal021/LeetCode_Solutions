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
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL || l2 == NULL) return l1 != NULL ? l1 : l2;
        
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        
        ListNode* c1 = l1;
        ListNode* c2 = l2;
        
        while(c1 != NULL && c2 != NULL){
            if(c1->val < c2->val){
                prev->next = new ListNode(c1->val);
                c1 = c1->next;
            }else{
                prev->next = new ListNode(c2->val);
                c2 = c2->next;
            }
            
            prev = prev->next;
        }
    
        prev->next = c1 != NULL ? c1 : c2;
        ListNode* ans = dummy->next;
        dummy->next = NULL;
        delete dummy;
        return ans;
    }
    
    ListNode* getMid(ListNode* head){
        
        ListNode* s = head;
        ListNode* f = head;
        
        while(f->next != NULL && f->next->next != NULL){
            s = s->next;
            f = f->next->next;
        }
        
        return s;
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* mid = getMid(head);
        ListNode* nhead = mid->next;
        mid->next = NULL;
        
        ListNode* ans = mergeTwoLists(sortList(head), sortList(nhead));
        
        return ans;
    }
};
