#include <iostream>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <stack>
#include <string> // getline
typedef long long ll;

#define sd(x) scanf("%d", &x);
#define ForC(cs, t) for (int cs = 1; cs <= t; cs++)

using namespace std;

const string VISIT = "VISIT";
const string BACK = "BACK";
const string FORWARD = "FORWARD";
const string QUIT = "QUIT";

int main()
{
    int t;
    string link, command, currentPage = "";

    sd(t);
    ForC(cs, t)
    {
        stack<string> forward, backword;
        printf("Case %d:\n", cs);
        currentPage = "http://www.lightoj.com/";
        while (true)
        {
            cin >> command;
            if (command == QUIT)
                break;
            else if (command == VISIT)
            {
                cin >> link;
                cin.ignore();
                backword.push(currentPage);
                while (!forward.empty())
                {
                    forward.pop();
                }
                currentPage = link;
                cout << currentPage << endl;
            }
            else if (command == FORWARD)
            {
                if (!forward.empty())
                {
                    backword.push(currentPage);
                    currentPage = forward.top();
                    forward.pop();
                    cout << currentPage << endl;
                }
                else
                {
                    cout << "Ignored" << endl;
                }
            }
            // BREAK
            else
            {
                if (!backword.empty())
                {
                    forward.push(currentPage);
                    currentPage = backword.top();
                    backword.pop();
                    cout << currentPage << endl;
                }
                else
                {
                    cout << "Ignored" << endl;
                }
            }
        }
    }
    return 0;
}