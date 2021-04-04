class Solution {
public:
    
    int getlen(ListNode* head){
        
        if(head == NULL) return 0;
        
        int l = 0;
        while(head != NULL){
            head = head->next;
            l++;
        }
        return l;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL) return NULL;
        
        int l1 = getlen(headA);
        int l2 = getlen(headB);
        
        ListNode* biggerList = l1 > l2 ? headA : headB;
        ListNode* smallerList = l1 > l2 ? headB : headA;
        
        int diff = max(l1,l2) - min(l1,l2);
        
        while(diff != 0){
            biggerList = biggerList->next;
            diff--;
        }
        
        while(biggerList != smallerList){
            biggerList = biggerList->next;
            smallerList = smallerList->next;
        }
        
        return smallerList;
    }
};
