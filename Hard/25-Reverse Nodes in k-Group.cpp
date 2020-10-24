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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next == NULL)return head; 
        
        ListNode* temp=head;
        
        for(int i=0;i<k;i++){
            if(temp==NULL)return head;
            temp=temp->next;
        }
        
        temp = head;
        ListNode* prev = NULL;
        ListNode* nex = NULL;
        for(int i=0;i<k;i++){
            nex = temp->next;
            temp->next = prev;
            prev = temp;
            temp= nex;
        }
        if(nex!=NULL){
            head->next = reverseKGroup(nex,k);
        }
        
        return prev;
    
        
    }
};
