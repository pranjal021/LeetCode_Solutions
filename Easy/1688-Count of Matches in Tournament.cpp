//The winning team never looses the match, therefore n - 1 match has to be played in order to loose
//n -1 teams.
//Therefore whether n is odd or even, n -1 matches always needed to be played.
//Try learning by taking different values of n!!

class Solution {
public:
	int numberOfMatches(int n) {
		return n-1;
	}
};
