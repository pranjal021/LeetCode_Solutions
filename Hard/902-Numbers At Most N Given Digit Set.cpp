class Solution {
public:
	int atMostNGivenDigitSet(vector<string>& D, int N) {

		if(D.size() < 1 || N <= 0)
			return 0;
		string number =to_string(N);
		int numberofdigits = number.size();
		int result = 0;
		for(int i =  1; i < numberofdigits; i++)
			result += pow(D.size(), i);
		int holdresult = 1;
		int flag = 0;
		for(int i =0; i <numberofdigits; i++)
		{
			flag = 0;
			for(int j = 0; j < D.size(); j++)
			{
				if(D[j][0] < number[i])
					result += pow(D.size(), numberofdigits-(i+1));
				else if(D[j][0] == number[i])
				{
					flag = 1;
					break;
				}
			}
			if(!flag)
				break;
		}
		return result+flag;
	}
};
