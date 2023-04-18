#include <iostream>
#include <stdio.h>

using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int i = 0;
        string s = "";
        while (i < word1.size() || i < word2.size())
        {
            if (i < word1.size()) s.push_back(word1[i]);
            if (i < word2.size()) s.push_back(word2[i]);
            i++;
        }
        return s;
    }
};

int main()
{

    Solution sol = Solution();
    cout << sol.mergeAlternately("abcd", "pq") << endl;

    return 0;
}