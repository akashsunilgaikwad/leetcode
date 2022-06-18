#include <iostream>
#include <bits/stdc++.h>

class Solution{

public:
	int reverse(int x)
	{
		int reverseNum = 0;
		while(x != 0)
		{
			int digit = x % 10;

			if(reverseNum > INT_MAX / 10 || (reverseNum == INT_MAX/10 && digit > INT_MAX % 10))
				return 0;

			if(reverseNum < INT_MIN/10 || (reverseNum == INT_MIN/10 && digit < INT_MIN % 10))
				return 0;
			
			reverseNum = reverseNum * 10 + digit;
			x = x / 10;
		}

		return reverseNum;
	}

};


int main()
{

	Solution sol;

	std::cout << sol.reverse(123) << std::endl;
	return 0;
}