#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices.size();
        int mx = prices[0], mn = mx, sell = mn, buy = mn, profit=0;

        for(int i = 1; i<l; i++){
            int price = prices[i];
            if(price < sell && price < buy){
                buy = price;
                sell = price;
                mx = price;
                mn = min(price, mn);
            } else if(price > sell && price > mx){
                sell = price;
                profit = max(profit, sell-buy);
                mx = max(price,mx);
            }
        }
        return profit;
    }
};

int main(){
    vector<int> v {7,1,5,3,6,4};
    Solution sol = Solution();
    cout << sol.maxProfit(v) << endl;
    return 0;
}