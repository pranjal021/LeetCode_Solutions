class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        
        for(int i=0;i<moves.length();i++){
            char ch = moves[i];
            
            if(ch == 'U')
                y++;
            else if(ch == 'D')
                y--;
            else if(ch == 'L')
                x--;
            else if(ch == 'R')
                x++;
        }
        
        if(x == 0 && y == 0)
            return true;
        else
            return false;
    }
};
