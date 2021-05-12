class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int best_score = 0;
        
        for(int i=0;i<k;i++){
            best_score += cardPoints[i];
        }
        
        int i = k-1, j = cardPoints.size()-1;
        
        int score = best_score;
        
        for(;i>=0;i--){
            
            score -= cardPoints[i];
            score += cardPoints[j];
            
            if(score > best_score){
                best_score = score;
            }
            
            j--;
        }
        
        return best_score;
    }
};
