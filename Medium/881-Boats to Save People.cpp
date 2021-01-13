class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int boats = 0; 
        sort(people.begin(), people.end());
       
        int i=0;
        int j = people.size()-1;
        
        while(i <= j){
            if((people[i] + people[j]) <= limit){ //if weight of two persons are within the limits 
                boats++;                          
                i++;
                j--;
            } 
            else if((people[i] + people[j]) > limit){ 
                boats++;
                j--;
            }
        }
        
        return boats;
    }
};
