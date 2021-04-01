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
        ListNode* slow = head;
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
        ListNode* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        
        ListNode* mid = getMid(head);
        ListNode* nhead = mid->next;
        mid->next = NULL;
        
        nhead = reverse(nhead);
        
        ListNode* c1 = head;
        ListNode* c2 = nhead;
        
        bool flag = true;
        
        while(c1 != NULL && c2 != NULL){
            if(c1->val != c2->val){
                flag = false;
                break;
            }
            c1 = c1->next;
            c2 = c2->next;
        }
        
        nhead = reverse(nhead);
        mid->next = nhead;
        
        return flag;
    }
};
