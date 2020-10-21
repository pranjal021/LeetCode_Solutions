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
