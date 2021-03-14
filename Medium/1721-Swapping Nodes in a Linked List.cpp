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
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* first = head;
        ListNode* second = head;
        ListNode* temp = head;
        
        while(k != 1){
            temp = temp->next;
            k--;
        }
        
        first = temp;
        
        while(temp->next != NULL){
            temp = temp->next;
            second = second->next;
        }
        
        swap(second->val, first->val);
        return head;
    }
};
