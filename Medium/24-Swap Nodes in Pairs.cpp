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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        tail->next = head;
        while(head && head->next){
            ListNode* nxtptr = head->next->next;
            tail->next = head->next;
            (head->next)->next=head;
            tail = head;
            tail->next = nxtptr;
            head =nxtptr;
        }
        head=dummy->next;
        delete dummy;
        return head;

    }
};
