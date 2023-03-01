#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution
{
public:
    int temp;
    void reverseString(vector<char> &s)
    {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(s[i] != s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            i++;
            j--;
        }

    }
};

int main()
{
    Solution sol = Solution();
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s);
    for(auto it : s){
        cout << it << " ";
    }
    return 0;
}

