#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Solution
{
public:
    void insert(string *v, string &str, int start, int end)
    {
        // cout << "END: " << str[end] << endl;
        string s = str.substr(start, end - start);
        // cout << "String: " << s << endl;
        v[int(str[end]) - 'O'] = s;
    }

    string sortSentence(string s)
    {
        string v[10];
        string output = "";
        int start = 0;
        int end = 0;
        int wordCount = 0;
        s += ' ';
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                end = i - 1;
                insert(v, s, start, end);
                wordCount++;
                start = i + 1;
            }
        }
        for (int i = 1; i < 10; i++)
        {
            cout << v[i] << " ";
            output += v[i] + ' ';
        }
        cout << endl;
        // cout << v[wordCount] << " " << endl;
        output += v[wordCount];
        return output;
    }
};

int main()
{
    string s = "is2 sentence4 This1 a3";

    Solution sol = Solution();
    cout << sol.sortSentence(s) << endl;
    return 0;
}