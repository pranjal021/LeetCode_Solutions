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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        
        ListNode* h = insertionSortList(head->next);
        
        if(head->val <= h->val){
            head->next = h;
            return head;
        }
        
        ListNode* node = h;
        while(node->next && head->val > node->next->val){
            node = node->next;
        }
        
        head->next = node->next;
        node->next = head;
        return h;
    }
};
