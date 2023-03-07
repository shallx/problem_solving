#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left = 0,right = (long long) time[0] * totalTrips;
        
        int n = time.size();
        long long result = right,sum = 0,mid;

        while(left < right){
            sum = 0;
            mid = (left + right)/2;
            for(int i = 0; i<n; i++){ 
                sum += mid / time[i];
            }

            if(totalTrips > sum){
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
    vector<int> v{3,3,8};
    int totalTrips = 6;
    cout << sol.minimumTime(v,totalTrips) << endl;
    return 0;
}

// time = [1,2,5,10], trip = 100;