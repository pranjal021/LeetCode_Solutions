class Solution {
public:
    
    int count = 0;
    
    void getCount(vector<int> v,int index){
        if(index == v.size()){
            count++;
            return;
        }
        
        for(int i=index;i<v.size();i++){
            if(v[i]%(index+1) == 0 || (index+1)%v[i] == 0){
                swap(v[i], v[index]);
                getCount(v,index+1);
                swap(v[i],v[index]);
            }
        }
    }
    
    int countArrangement(int n) {
        
        vector<int> v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        
        getCount(v,0);
        return count;
    }
};
