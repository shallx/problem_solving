#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    long long minEatingSpeed(vector<int>& piles, int h) {
        long long left = 0,right = (long long) piles[0] * h;
        
        int n = piles.size();
        long long result = right,sum = 0,mid;

        while(left < right){
            sum = 0;
            mid = (left + right)/2;
            for(int i = 0; i<n; i++){ 
                sum += mid / piles[i];
            }

            if(h > sum){
                left = mid + 1;
            }
            else{
                result = min(result,mid);
                right = mid;
            }
        }
        return result;
    }
};
int main(){
    Solution sol = Solution();
    vector<int> v{3,6,7,11};
    int h = 8;
    cout << sol.minEatingSpeed(v,h) << endl;
    return 0;
}

// time = [1,2,5,10], trip = 100;