#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

// TODO: MUST REVISE
class Solution
{
public:
    int getArea(vector<int> &height, int left, int right)
    {
        return min(height[left], height[right]) * (right - left);
    }
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int mx = 0;
        while (left < right)
        {
            int area = getArea(height, left, right);
            mx = max(area, mx);

            if (height[left] < height[right])
                left++;
            else if (height[right] < height[left])
                right--;
            else
            {
                left++;
                right--;
            }
        }
        return mx;
    }
};

int main()
{

    Solution sol = Solution();
    vector<int> height = {2, 3, 4, 5, 18, 17, 6};
    cout << sol.maxArea(height) << endl;

    return 0;
}