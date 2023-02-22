#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <list>
#define sd(x) scanf("%d", &x);

using namespace std;

int isPalindrome(int x)
{
    int num = x;
    list<int> ls;
    if(x < 0) return false;
    bool isPalindrome = true;

    do
    {
        ls.push_back(num % 10);
        num /= 10;
    } while (num != 0);

    while (!ls.empty())
    {
        if (ls.size() == 1)
        {
            break;
        }
        int a = ls.front();
        int b = ls.back();
        ls.pop_back();
        ls.pop_front();
        if (a != b)
        {
            isPalindrome = false;
            break;
        }
    }

    return isPalindrome;
}

int numberLength(int num)
{
    int length = 0;
    do
    {
        num /= 10;
        length++;
    } while (num != 0);
    return length;
}

int main()
{

    int n;
    cout << isPalindrome(121) << endl;
    return 0;
}