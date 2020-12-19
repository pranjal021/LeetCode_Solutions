//Method 1 : O(N^3)

class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int n = rating.size();
        int ans = 0;
        
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    
                    if(rating[i] < rating[j] && rating[j] < rating[k]){
                        ans++;
                    }else if(rating[i] > rating[j] && rating[j] > rating[k]){
                        ans++;
                    }
                    
                }
            }
        }
            
        return ans;
    }
};

//Method 2: (N^2)

class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int result = 0;
        int n = rating.size();
        
        for(int i=1;i<n-1;i++){
            int leftsmall = 0, leftlarge = 0;
            int rightsmall = 0, rightlarge = 0;
            
            //left
            for(int j=0;j<i;j++){
                if(rating[j] < rating[i]) leftsmall++;
                if(rating[j] > rating[i]) leftlarge++;
            }
            
            //right
            for(int j=i+1;j<n;j++){
                if(rating[j] < rating[i]) rightsmall++;
                if(rating[j] > rating[i]) rightlarge++;
            }
            
            result += leftsmall*rightlarge + leftlarge*rightsmall;
        }
        
        return result;
    }
};
