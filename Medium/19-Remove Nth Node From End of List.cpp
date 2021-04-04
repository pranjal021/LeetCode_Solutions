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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL) return head;
        
        if(n == 0) return head; 
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(n != 0){
            fast = fast->next; //move 'fast' n steps forward
            n--;
        }
        
        //if (n == length of the linked list), then at this point, 'fast' would become NULL
        if(fast == NULL){
            return head->next;
        }
        
        //otherwise (n != length of the linked list)
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        
        //removing the nth node from the last
        slow->next = slow->next->next;
        
        return head;
    }
};
