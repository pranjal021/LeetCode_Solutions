class Number{
private:
    int freq;
    int start;
    int end;
    
public:
    
    Number(){
        freq = 0;
        start = 0;
        end = 0;
    }
    
    void setStartIndex(int s){
        start = s;
    }
    
    void setEndIndex(int e){
        end = e;
    }
    
    void setFreq(int f){
        freq = f;
    }
    
    int getFreq(){
        return freq;
    }
    
    int getValue(){
        return end-start;
    }
    
};


class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        Number h[50000], *num;
        
        int minval = 0;
        int maxOccur = 0;
        
        for(int i=0;i<nums.size();i++){
            num = &h[nums[i]];
            if(num->getFreq() == 0){
                num->setStartIndex(i);
            }
            num->setEndIndex(i);
            num->setFreq(num->getFreq()+1);
        }
        
        for(int i=0;i<nums.size();i++){
            num = &h[nums[i]];
            
            if(maxOccur < num->getFreq()){
                maxOccur = num->getFreq();
                minval = num->getValue();
            }else if(maxOccur == num->getFreq()){
                minval = min(minval, num->getValue());
            }
        }
        
        return minval+1;
    }
};
