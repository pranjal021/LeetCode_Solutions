//Method 1:

class Solution {
	public:
		int distributeCandies(vector<int>& candyType) {

			unordered_set<int> s(candyType.begin(),candyType.end());
			int n = candyType.size();
			return (s.size() > n/2) ? n/2 : s.size();
		}
	};
  
  //Method 2:
  
  class Solution {
public:
	int distributeCandies(vector<int>& candyType) {

		unordered_map<int,int> m;
		int n = candyType.size();

		for(auto& x:candyType) m[x]++;

		return (m.size() > n/2) ? n/2 : m.size();
	}
};
