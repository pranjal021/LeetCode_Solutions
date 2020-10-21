//Method 1:

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for(auto a:asteroids){
            bool destroyed = false;
            while(res.size() && res.back()>0 && a<0 && !destroyed){
                if(res.back() >= -a) destroyed = true;
                if(res.back() <= -a) res.pop_back();
            }
            
            if(!destroyed) res.push_back(a);
        }
        return res;
    }
};

//Method 2: using STACK

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        
        for(int i=0;i<asteroids.size();i++){
            
            if(s.empty() || asteroids[i]>0){
                s.push(asteroids[i]);
            }else{
                
                while(true){
                    int top = s.top();
                    
                    if(top<0){
                        s.push(asteroids[i]);
                        break;
                    }else if(top == -asteroids[i]){
                        s.pop();
                        break;
                    }else if(top > (-asteroids[i])){
                        break;
                    }else{
                        s.pop();
                        if(s.empty()){
                            s.push(asteroids[i]);
                            break;
                        }
                    }
                }
                
            }
            
        }
        
        
        vector<int> res(s.size(),0);
        for(int i=s.size()-1;i>=0;i--){
            res[i] = s.top();
            s.pop();
        }
        return res;
        
    }
};
