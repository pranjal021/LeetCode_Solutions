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
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL || head->next ==NULL){
            return NULL;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL && fast->next!=NULL && slow){
            fast= fast->next->next;
            slow = slow->next;
            if(slow == fast){
                break;
            }
        }
        
        if(slow == fast){
            
            slow = head;
            if(fast==head){
                return head;
            }
            while(slow->next != fast->next){
                slow= slow->next;
                fast = fast->next;
            }
            return fast->next;
        }
        return NULL;
       
    }
};
