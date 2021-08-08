// 684

class Solution
{
public:
    vector<int> par;

    int findPar(int u)
    {
        return par[u] == u ? u : (par[u] = findPar(par[u]));
    }

    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {

        int n = edges.size() + 1;

        for (int i = 0; i < n; i++)
        {
            par.push_back(i);
        }

        for (vector<int> &e : edges)
        {
            int u = e[0], v = e[1];
            int p1 = findPar(u), p2 = findPar(v);

            if (p1 != p2)
            {
                par[p1] = min(p1, p2);
                par[p2] = min(p1, p2);
            }
            else
            {
                return e;
            }
        }

        return {};
    }
};
