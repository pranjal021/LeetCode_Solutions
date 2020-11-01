//Method 1:

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
        int ans =0;
        
        for(auto& emp: employees){
            if(emp->id == id){
                ans += emp->importance;
                
                if(!emp->subordinates.empty()){
                    for(auto& x:emp->subordinates){
                        ans += getImportance(employees,x);
                    }
                }
                return ans;
            }
        }
        
        return ans;
    }
};

//Method 2:

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
        int result = 0;
        unordered_map<int,Employee*> m;
        
        for(auto &x:employees){
            m[x->id] = x;
        }
        
        queue<Employee*> q;
        q.push(m[id]);
        
        while(!q.empty()){
            auto t = q.front();
            q.pop();
            result += t->importance;
            for(auto& x: t->subordinates){
                q.push(m[x]);
            }
        }
        
        return result;
    }
};

//Method 3:

class Solution {
public:
    
    unordered_map<int,Employee*> m;
    
    int getImportance(vector<Employee*> employees, int id) {
        for(auto& x:employees){
            m[x->id] = x;
        }
        
        return solve(id);
    }
    
    int solve(int id){
        auto temp = m[id];
        int result = temp->importance;
        
        for(auto& x: temp->subordinates){
            result += solve(x);
        }
        return result;
    }
};
