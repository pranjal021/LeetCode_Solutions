class Solution {
public:
    string reformat(string s) {
        string l;
        string d;
        
        for(auto x:s){
           isalpha(x) ? l.push_back(x) : d.push_back(x);     
        }
        
        if(abs(int(l.size()-d.size())) > 1) return "";
        
        bool alpha = l.length() > d.length();
        
        int i=0,j=0,k=0;
        while(i < s.size()){
            if(alpha){
                s[i++] = l[j++];
            }else{
                s[i++] = d[k++];
            }
            
            alpha = !alpha;
        }
        
        return s;
    }
};
