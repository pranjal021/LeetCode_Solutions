class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {        
   
        int starttime = customers[0][0];
        int endtime = customers[0][0] + customers[0][1];        
        
        double ans = endtime - starttime;

        int n = customers.size();
        
        for(int i=1 ; i < n ;i ++){
            
            if(customers[i][0] > endtime){
                endtime = customers[i][0] + customers[i][1];
            }else{
                endtime = endtime + customers[i][1];
            }
           
            ans += endtime - customers[i][0];
            
        }
        
        return ans/n;
    }
};
