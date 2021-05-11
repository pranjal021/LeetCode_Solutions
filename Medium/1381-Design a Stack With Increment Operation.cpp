class CustomStack {
    
    vector<int> st, inc;
    int n;
    
public:
    
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(st.size() == n){
            return;
        }
        st.push_back(x);
        inc.push_back(0);
    }
    
    int pop() {
        int s = st.size() - 1;
        
        if(s < 0) return -1;
        if(s > 0) inc[s-1] += inc[s];
        int x = st[s];
        int i = inc[s];
        st.pop_back();
        inc.pop_back();
        
        return x + i;
    }
    
    void increment(int k, int val) {
        int m = min(k, (int)st.size() ) - 1;
        if(m >= 0){
            inc[m] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
