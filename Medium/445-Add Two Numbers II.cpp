class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string a, b;
        ListNode *result = nullptr;
        while(l1) { a.push_back(l1->val+'0'); l1 = l1->next;}
        while(l2) { b.push_back(l2->val+'0'); l2 = l2->next;}
        int l = a.size()-1, r = b.size()-1, carry = 0;
        while(l >= 0 || r >= 0 || carry == 1) {
            int c = (l >= 0 ? a[l--]-'0' : 0) + ( r >= 0 ? b[r--]-'0' : 0) + carry;
            ListNode *temp = new ListNode(c%10);
            temp->next = result;
            result = temp;
            carry = c/10;
        }        
        return result;
    }
};
