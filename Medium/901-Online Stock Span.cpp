class StockSpanner {
    
    stack<pair<int,int>> s;
    //val , index
    int index;
    
public:
    StockSpanner() {
        index = 0;
        //base value to stack
        s.push(make_pair(1e6, -1));
    }
    
    int next(int price) {
        
        pair<int,int> p;
        p.first = price;
        p.second = index;
        index++;
        
        while(s.size() > 0 && s.top().first <= price){
            s.pop();
        }
        
        int ans = p.second - s.top().second;
        
        s.push(p);
        
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
