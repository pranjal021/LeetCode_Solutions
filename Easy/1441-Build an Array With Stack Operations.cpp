class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string> s;

        int e = target[target.size()-1]; //find the last element in the target array
        
        for(int i=1;i<=e;i++){
            
            if(std::find(target.begin(),target.end(),i) != target.end()){
                s.push_back("Push");
            }else{
                s.push_back("Push");
                s.push_back("Pop");
            }
            
        }
        return s;
    }
};
