#include <iostream>
#include <vector>
using namespace std;

vector<int> two_sum(vector<int> &nums, int target)
{
    vector<int> out;
    for(int i = 0; i< nums.size(); i++)
    {
        for(int j=0; j<nums.size(); j++)
        {
            if(i!=j)
            {
                if(nums[i] + nums[j] == target)
                {
                    cout << "found it for target" << target <<endl;
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
            }
        }
    }
    return out;
}

int main()
{
    cout << "I am from Leetcode Program p1 two sum" <<endl;
    vector<int> input_vector { 3, 8, 1, 15};
    int target = 9;

    vector<int> out_vector;
    out_vector = two_sum(input_vector, target);
    cout <<out_vector.at(0) << " " << out_vector.at(1) << endl;

    return 0;
}