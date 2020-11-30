class Solution
{
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& v) 
    {
        vector<vector<int>> ret; // the answer (ret is short for return)
        
        int curr_height = 0;
        int i, j, k;
        
        priority_queue<pair<int, int>> pq; // height, right limit of a building
        pair<int, int> tope; // use explained later
        
        for (i = 0; i < v.size(); i++)
        {
            while (pq.size() && pq.top().second < v[i][0]) // the height of the skyline will decrase
            {
                tope = pq.top(); // the top of the pq which we will decrease
                                 // we will need this to confirm that there is a decrease in the height
                pq.pop();
                
                // if the new top has exhausted before the current top
                // i.e., right of the new top <= right of the previous top
                while (pq.size() && pq.top().second <= tope.second)
                    pq.pop();
                
                if (pq.size())
                    curr_height = pq.top().first;
                else // no buildings after the end of previous top (tope) and start of new building
                    curr_height = 0;
                if (curr_height < tope.first) // the decrease in the height has been confirmed
                {
                    ret.push_back({tope.second, curr_height});
                }
                
            }
            
            pq.push(make_pair(v[i][2], v[i][1])); // now insert the new building
            if (curr_height < pq.top().first) // if increase in height, it will be due to new building
            {
                if (i != v.size() - 1) // next building also has same begining as this, then skip
                {
                    if (v[i + 1][0] == v[i][0])
                        continue;
                }
                curr_height = pq.top().first;
                ret.push_back({v[i][0], curr_height}); // pair<left limit, height>
            }
        }
        
        while (pq.size() && true) // when all the inputs have exhausted
        {
            tope = pq.top();
            pq.pop();

            while (pq.size() && pq.top().second <= tope.second)
                pq.pop();

            if (pq.size())
                curr_height = pq.top().first;
            else
                curr_height = 0;
            if (curr_height < tope.first)
            {
                ret.push_back({tope.second, curr_height});
            }

        }
        
        
        return ret;
    }
};
