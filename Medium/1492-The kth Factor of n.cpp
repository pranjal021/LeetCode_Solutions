class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;
        int i = 1;
        while ((factors.size() <= k) && (i <= n)) {
            if (n % i == 0)
                factors.push_back(i);
            i++;
        }
        return factors.size() >= k ? factors[k-1] : -1;
    }
};
