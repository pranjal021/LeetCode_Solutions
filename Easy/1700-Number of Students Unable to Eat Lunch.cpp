class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int a[] = {0,0};
        for(auto x:students){
            a[x]++;
        }
        
        int k=0;
        while(k < sandwiches.size()){
            if(a[sandwiches[k]] > 0)
                a[sandwiches[k]]--;
            else
                break;
            k++;
        }
        
        return sandwiches.size()-k;
    }
};
