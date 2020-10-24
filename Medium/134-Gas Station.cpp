class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum =0;
        for(int i=0;i<gas.size();i++){
            sum += gas[i]-cost[i];
        }
        
        if(sum<0)return -1;
        int tank=0;
        int start = 0;
        
        for(int i=0;i<gas.size();i++){
            tank += gas[i]-cost[i];
            if(tank<0){
                tank = 0;
                start = i+1;
            }
        }
        
        return start;
    }
};
