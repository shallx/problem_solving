#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>

using namespace std;

class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 0, right = 10^9;

        int n = piles.size();
        int speed = right, time = 0, mid;

        while (left < right)
        {
            time = 0;
            mid = (left + right) / 2;
            for (int i = 0; i < n; i++) time += ceil(piles[i] / (double)mid);
            cout << endl;

            // if time < h  => decrease mid | decrease right
            // else increase mid | increase left
            if (time <= h) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};
int main()
{
    Solution sol = Solution();
    vector<int> v{3, 6, 7, 11};
    int h = 8;
    cout << sol.minEatingSpeed(v, h) << endl;
    return 0;
}

// time = [1,2,5,10], trip = 100;