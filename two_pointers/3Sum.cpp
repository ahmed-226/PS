#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > 0)
//             break;
//         if (i > 0 && nums[i] == nums[i - 1])
//             continue;

//         int l = i + 1;
//         int r = nums.size() - 1;
//         while (l < r)
//         {
//             int sum = nums[i] + nums[l] + nums[r];
//             if (sum == 0)
//             {
//                 ans.push_back({nums[i], nums[l], nums[r]});

//                 l++;
//                 r--;
//                 while (l < r && nums[l] == nums[l - 1])
//                     l++;
//             }
//             else if (sum < 0)
//             {
//                 l++;
//             }
//             else
//             {
//                 r--;
//             }
//         }
//     }
//     return ans;
// }


vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    unordered_set<string> uniqueTriplets;
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) break;
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int l = i + 1;
        int r = nums.size() - 1;
        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum == 0) {
                vector<int> triplet = {nums[i], nums[l], nums[r]};
                sort(triplet.begin(), triplet.end());
                string hashString = to_string(triplet[0]) + "," + to_string(triplet[1]) + "," + to_string(triplet[2]);
                if (uniqueTriplets.find(hashString) == uniqueTriplets.end()) {
                    uniqueTriplets.insert(hashString);
                    ans.push_back(triplet);
                }
                l++;
                r--;
            } else if (sum < 0) {
                l++;
            } else {
                r--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);
    for (auto x : res)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}