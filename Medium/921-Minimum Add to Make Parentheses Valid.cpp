class Solution {
public:
    int minAddToMakeValid(string S) {
        
        stack<int> s;
        
        for(auto b : S){
            
            if(b == '('){
                s.push(b);
            }else{
                
                if(s.size() == 0){
                    s.push(b);
                }else if(s.top() == '('){
                    s.pop();
                }else{
                    s.push(b);
                }
                
            }
            
        }
        
        return s.size();
        
    }
};
