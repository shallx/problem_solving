#include <vector>
#include <list>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int i = 0,j = nums.size() - 1, k = j;
        vector<int> result(j+1);
        while (i <= j)
        {
            if (nums[i] * nums[i] > nums[j] * nums[j])
            {
                result[k--] = nums[i] * nums[i];
                i++;
            }
            else
            {
                result[k--] = nums[j] * nums[j];
                j--;
            }
        }
        return result;
    }
};

int main()
{
    vector<int> v = {-7,-3,2,3,11};
    Solution sol = Solution();
    vector<int> res = sol.sortedSquares(v);

    for (auto it : res)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}