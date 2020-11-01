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
 
//Method 1:

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        
        while(head){
            res = res<<1;
            res |= head->val;
            head = head->next;
        }
        
        return res;
    }
};

//Method 2:

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        
        while(head){
            res = res*2 + head-val;
            head = head->next;
        }
        return res;
    }
};
