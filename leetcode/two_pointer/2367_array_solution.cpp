#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    int arithmeticTriplets(vector<int> &nums, int diff)
    {
        int length = nums.size();
        int sum = 0;
        int contains[201] = {};
        for (int i = 0; i < length; i++)
        {
            if(nums[i] >= diff*2){
                if(contains[nums[i] - diff] && contains[nums[i] - diff * 2]){
                    sum++;
                }
            }
            contains[nums[i]] = 1;
        }
        return sum;
    }
};

int main()
{
    Solution sol = Solution();
    vector<int> s = {0, 1, 4, 6, 7, 10};
    cout << sol.arithmeticTriplets(s, 3) << endl;
    return 0;
}
