#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
    int getMin(vector<int> v){
        int n = v.size();
        int _min = v[0];
        for(int i = 1; i<n; i++){
            _min = min(_min, v[i]);
        }
        return _min;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int left = 0;
        long long int right = time[0] * (long long)getMin(time);
        cout << "Right: " << right << endl;
        long long int mid = (left + right)/2;
        int n = time.size();
        long long result = 0;
        long long sum = 0;

        while(left < right){
            sum = 0;
            cout << "Left: " << left << " Right: " << right << " | " << mid << endl;
            for(int i = 0; i<n; i++){ 
                sum += mid / time[i];
            }
            cout << "Mid: " << mid << " SUM: " << sum << endl;
            if(sum == totalTrips) {
                cout << "Matched Mid:" << mid << endl;
                right = mid + 1;
                mid = (left + right)/2;
            } 
            else if(totalTrips > sum){
                left = mid + 1;
                mid = (left+right)/2;
            }
            else{
                right = mid - 1;
                mid = (left+right)/2;
            }
        }
        cout << "Sum: " << sum << " Mid: " << mid << endl;
        return mid;
    }
};
int main(){
    Solution sol = Solution();
    // vector<int> v{1,2,3};
    // int totalTrips = 5;
    vector<int> v{3,3,8};
    int totalTrips = 6;
    cout << sol.minimumTime(v,totalTrips) << endl;
    return 0;
}

// time = [1,2,5,10], trip = 100;