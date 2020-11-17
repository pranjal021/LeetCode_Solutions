class Solution {
public:
    int mirrorReflection(int p, int q){
        bool up=true;
        int left=0; // y coordinates of the ray when ray hits the left wall
        int right=0; // y coordinates of the ray when ray hits the right wall
        bool dir=true; // dir==0 left, dir==1 right
        int loc=0; // y coordinates of ray
        while(1){
            loc+= (up)? q : -q;
            if(loc>p){
                up=false;
                loc = p - loc%p;
            }
            else if(loc<0){
                up=true;
                loc *=-1;
            }
            if(dir){right=loc;}
            else{left=loc;}
            dir ^=1;
            if(right==0){return 0;}
            if(right==p){return 1;}
            if(left==p){return 2;}
        }
        return 0;
    }
};
