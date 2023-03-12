#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unordered_map>
using namespace std;

// Sliding Window Solution
class Solution
{
public:
    int countGoodSubstrings(string s)
    {
        unordered_map<char, int> mp;
        int ln = s.size();
        if (ln < 3)
            return 0;
        mp[s[0]]++;
        mp[s[1]]++;
        mp[s[2]]++;
        int count = mp.size() == 3;
        char left = 0;
        for (int right = 3; right < ln; right++)
        {
            ++mp[s[right]];
            --mp[s[left]];
            if (mp[s[left]] == 0)
                mp.erase(s[left]); // This ensures only the first index is deleted
            if (mp.size() == 3)
                count++; // if unique, add count
            left++;
        }
        return count;
    }
};

int main()
{
    Solution sol = Solution();
    string s = "xyzzaz";
    cout << sol.countGoodSubstrings(s) << endl;
    return 0;
}