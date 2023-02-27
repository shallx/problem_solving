// Two pointers technique

#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v = {-2, 1, 1, 2, 3};
    list<int> result;
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] * v[i] == v[j] * v[j])
        {
            cout << "Its all same" << endl;
            result.push_front(v[i] * v[i]);
            result.push_front(v[i] * v[i]);
            i++;
            j--;
        }
        else if (i * i > j * j)
        {
            cout << "I is greater" << endl;
            result.push_front(v[i] * v[i]);
            i++;
        }
        else
        {
            cout << "J is greater" << endl;
            result.push_front(v[j] * v[j]);
            j--;
        }
    }

    for (auto it : result)
    {
        cout << it << " " << endl;
    }
    return 0;
}