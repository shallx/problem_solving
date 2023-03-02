#include <iostream>
#include <stdio.h>
#include <map>
#include <string.h>

using namespace std;

string strConCat(char a, char b)
{
    string s = "";
    s += a;
    s += b;
    return s;
}

string charToString(char a)
{
    string s = "";
    s += a;
    return s;
}

int main()
{
    map<string, int> map;
    map["I"] = 1;
    map["IV"] = 4;
    map["IX"] = 9;

    map["X"] = 10;
    map["XL"] = 40;
    map["XC"] = 90;

    map["V"] = 5;
    map["L"] = 50;
    map["D"] = 500;
    map["M"] = 1000;

    map["C"] = 100;
    map["CD"] = 400;
    map["CM"] = 900;

    string s = "MCMXCIV";
    int length = s.size() - 1;
    int sum = 0;
    for (int i = 0; i <= length; i++)
    {
        if (s[i] == 'I' || s[i] == 'X' || s[i] == 'C')
        {
            if (i + 1 <= length)
            {
                int a = map[strConCat(s[i], s[i + 1])];
                if (a == 0) sum += map[charToString(s[i])];
                else
                {
                    sum += a;
                    i++;
                }
            }
            else sum += map[charToString(s[i])];
        }
        else sum += map[charToString(s[i])];
    }
    cout << sum << endl;
    return 0;
}