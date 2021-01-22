class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        
        if(x+y == z) return true;
        if(x+y < z) return false;
        
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }
        int volume = 0;
        while (1) {
            if (volume < x)
                volume += y;
            else
                volume -= x;
            if (volume == z)
                return true;
            if (volume == 0)
                return false;
        }
        
    }
};
