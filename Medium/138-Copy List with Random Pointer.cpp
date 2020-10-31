class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        
        unordered_map<Node*,Node*> m;
        Node* temp = head;
        while(temp){
            m[temp] = new Node(temp->val);
            temp = temp->next;
        }
        
        temp = head;
        
        while(temp){
            m[temp]->next = m[temp->next];
            m[temp]->random = m[temp->random];
            temp = temp->next;
        }
        return m[head];
    }
};
