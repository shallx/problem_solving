#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int minimumCardPickup(vector<int> &v)
    {
        int mn = v.size();
        unordered_map<int, int> mp;
        bool found = false;
        for (int i = 0; i < v.size(); i++)
        {
            if (mp.count(v[i]) > 0)
                {
                    mn = min(mn, abs(mp[v[i]] - i) + 1);
                    found = true;
                }
            mp[v[i]] = i;
        }
        return  found ? mn : -1;
    }
};

int main()
{
    vector<int> v{1,0,5,3};
    Solution sol = Solution();
    cout << sol.minimumCardPickup(v) << endl;

    return 0;
}