class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        stack<int> s;
        s.push(0);
        
        unordered_set<int> st = {0};
        
        while(!s.empty()){
            int i = s.top();
            s.pop();
            for(int j : rooms[i]){
                if(st.count(j) == 0){
                    st.insert(j);
                    s.push(j);
                    if(rooms.size() == st.size()) return true;
                }
            }
        }
        
        return rooms.size() == st.size();
    }
};
