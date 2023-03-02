#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

class Solution
{
public:
    vector<int> minNMax(vector<string> &strs)
    {
        int minI = 0;
        int maxI = 0;
        int n = strs.size() - 1;
        for (int i = 1; i <= n; i++)
        {
            if (strs[i].length() < strs[minI].length())
            {
                minI = i;
            }
            if (strs[i].length() > strs[maxI].length())
            {
                maxI = i;
            }
        }
        return {minI, maxI};
    }
    string longestCommonPrefix(vector<string> &strs)
    {
        string s = "";
        vector<int> v = minNMax(strs);

        int vLength = strs.size();

        sort(strs.begin(), strs.end());
        // for(auto i : strs){
        //     cout << i << " ";
        // }
        // cout << endl;
        // string minVal = strs[0];
        // string maxVal = strs[vLength-1];

        // for(int i = 0; i < minVal.length(); i++){
        //     if(minVal[i] == maxVal[i]) s+=minVal[i];
        //     else break;
        // }

        string minVal = strs[v[0]];
        string maxVal = strs[v[1]];
        for (int i = 0; i < minVal.length(); i++)
        {
            bool flag = true;
            for (int j = 1; j < vLength; j++)
            {
                if (minVal[i] != strs[j][i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                s += strs[0][i];
            }
        }

        return s;
    }
};

int main()
{
    Solution sol = Solution();
    vector<string> strs{"flow", "flower", "flight"};
    // vector<string> strs{"xar", "xbar", "abar", "flower", "flow", "flight"};
    cout << sol.longestCommonPrefix(strs) << endl;
    return 0;
}