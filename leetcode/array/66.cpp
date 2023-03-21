#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &d)
    {
        
        int carry = 1;
        for(int i = d.size()-1; i >=0; i--){
            int k = d[i] + carry;
            carry =  0;
            if(k > 9){
                d[i] = k % 10;
                carry = k/10;
            } else d[i] = k;
        }
        if(carry > 0){
            d.insert(d.begin(), carry);
        }
        return d;
    }
};

int main()
{
    vector<int> v{9};
    Solution sol = Solution();
    sol.plusOne(v);
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}