#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int n = arr.size();
        vector<int> v{0};
        int checking = 1;
        int missing = 0;
        for (int i = 0; i < n && missing <= k;)
        {
            if (checking != arr[i])
            {
                v.push_back(checking);
                missing++;
            }
            else {
                i++;
            }
            checking++;
        }

        while(missing < k){
            v.push_back(checking);
            missing++;
            checking++;
        }

        return v[k];
    }
};

int main()
{
    vector<int> arr{1, 2, 3, 4};
    int k = 2;
    Solution sol = Solution();
    cout << sol.findKthPositive(arr, k) << endl;
    return 0;
}