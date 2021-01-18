#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector <int> out;
    for(int i=0; i< nums.size(); i++)
    {
        for(int j=0; j< nums.size(); j++)
        {
            if (i != j)
            {
                if (nums[i] + nums[j] == target)
                {
                    cout <<"found it \t" << i << "\t" << j <<endl;
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
    vector <int> myVector;
    vector <int> outVector;
    // for (unsigned int i =0; i<=10; i++)
    // {
    //     myVector.push_back(i);
    // }
    myVector.push_back(3);
    myVector.push_back(2);
    myVector.push_back(4);

    outVector = twoSum(myVector, 6);

    if (outVector.empty())
    {
        cout << "outvector is empty" <<endl;
    }
    else
    {
        cout << "outVector is not empty" << endl;
    }
    
    for (unsigned int i =0; i<myVector.size(); i++)
    {
        cout << myVector[i]<< endl;
    }
    return 0;
}