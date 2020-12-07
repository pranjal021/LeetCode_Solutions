//Method 1

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int s = 0;
        int e = nums.size()-1;
        int ans = 0;
        
        while(s<e){
            if(nums[s] + nums[e] == k){
                ans++;
                s++;
                e--;
            }
            else if((nums[s] + nums[e]) < k){
                s++;
            }else{
                e--;
            }
        }
        return ans;
    }
};

//Method 2:

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;
        
        for(auto& num:nums) m[num]++;
        int ans = 0;
        
        for(auto it=m.begin();it!=m.end();it++){
            int num = it->first;
            int count = it->second;
            if(k - num == num) ans += count/2;
            else if(m.count(k-num)){
                int Min = min(count, m[k-num]);
                ans += Min;
                m[num] -= Min;
                m[k-num] -= Min;
            }
        }
        
        return ans;
    }
};
