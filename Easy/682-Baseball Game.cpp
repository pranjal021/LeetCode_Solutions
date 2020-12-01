class Solution {
public:
    
    int calPoints(vector<string>& ops) {
        
        stack<int> s;
        
        
        for(int i=0;i<ops.size();i++){
            
            string ch = ops[i];
            
            if(ch == "C") s.pop(); 
            
            else if(ch == "D") s.push(2 * s.top());
                
            else if(ch == "+"){
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                int z = x + y;
                s.push(y);
                s.push(x);
                s.push(z);
            }
            
            else s.push(stoi(ch));
            
        }
        
        int ans = 0;
        while(!s.empty()){
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};
