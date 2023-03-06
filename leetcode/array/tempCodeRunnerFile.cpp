class Solution
// {
// public:
//     int findKthPositive(vector<int> &arr, int k)
//     {
//         int n = arr.size();
//         vector<int> v{0};
//         int checking = 1;
//         int missing = 0;
//         for (int i = 0; i < n && missing <= k;)
//         {
//             if (checking != arr[i])
//             {
//                 v.push_back(checking);
//                 missing++;
//             }
//             else {
//                 i++;
//             }
//             checking++;
//         }

//         while(missing < k){
//             v.push_back(checking);
//             missing++;
//             checking++;
//         }

//         return v[k];
//     }
// };