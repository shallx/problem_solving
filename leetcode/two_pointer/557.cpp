#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

string reverseWords(string s)
{
    // Adding space at end so that last word is also counted
    // to reverse
    s += ' ';
    int length = s.length();
    int i = 0;
    int j = length - 1;
    for(int k=0;k<length; k++)
    {
        if (s[k] == ' ')
        {
            j = k - 1;
            while (i < j)
            {
                if (s[i] != s[j])
                {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
                i++;
                j--;
            }
            i = k + 1;
        }
    }

    // Removing white space
    s.erase(s.find_last_not_of(" ") + 1);
    
    return s;
}

int main()
{
    string s = "Let's take LeetCode contest";

    cout << reverseWords(s) << endl;
    return 0;
}