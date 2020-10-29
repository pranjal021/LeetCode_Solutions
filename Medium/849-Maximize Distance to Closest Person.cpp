class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        int i=0;
        int maxAns = 0;
        
        while(i < seats.size() && seats[i]==1){
            i++;
        }
        
        int start = i;
        
        while(i<seats.size()){
            start = i;
            int count =0;
            
            while(i < seats.size() && seats[i]==0){
                i++;
                count++;
            }
            
            int temp = count;
            
            if(start ==0 || i==seats.size()){
                maxAns = max(maxAns,temp);
            }else{
                maxAns = max(maxAns, (temp+1)/2);
            }
            
            while(i< seats.size() && seats[i]==1)
                i++;

        }
        
        return maxAns;
    }
};
