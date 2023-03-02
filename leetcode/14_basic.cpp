#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";

        int vLength = strs.size();

        string firstOne = strs[0];
        for (int i = 0; i < firstOne.length(); i++)
        {
            bool flag = true;
            for (int j = 1; j < vLength; j++)
            {
                if (firstOne[i] != strs[j][i])
                {
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
            if (flag) s += firstOne[i];
        }

        return s;
    }
};

int main()
{
    Solution sol = Solution();
    vector<string> strs{"reflower","flow","flight"};
    // vector<string> strs{"xar", "xbar", "abar", "flower", "flow", "flight"};
    cout << sol.longestCommonPrefix(strs) << endl;
    return 0;
}