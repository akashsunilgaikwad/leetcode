#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {

public:

	int char_to_int(char ch)
    {
       switch(ch)
       {
           case 'I': return 1;
           case 'V': return 5;
           case 'X': return 10;
           case 'L': return 50;
           case 'C': return 100;
           case 'D': return 500;
           case 'M': return 1000;
       }
        return 0;
    }

	int romanToInt(string s)
	{
		// unordered_map<char, int> umap;

		// umap['I'] = 1;
		// umap['V'] = 5;
		// umap['X'] = 10;
		// umap['L'] = 50;
		// umap['C'] = 100;
		// umap['D'] = 500;
		// umap['M'] = 1000;

		int num = 0;

		for(unsigned int i = 0; i < s.length() - 1; i++)
		{

			// int first = umap[s[i]];
			// int second = umap[s[i+1]];

			int first = char_to_int(s[i]);
			int second = char_to_int(s[i+1]);

			if(first < second)
			{
				num -= first;
			}
			else
			{
				num += first;
			}

		}

		num += char_to_int(s[s.length() - 1]);
		return num;
	}
};

int main()
{
	string tmpStr = "MCMXCIV";

	Solution sol;

	cout << "Result=" << sol.romanToInt(tmpStr) <<endl;
}