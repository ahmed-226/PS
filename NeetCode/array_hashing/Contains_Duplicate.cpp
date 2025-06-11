#include <bits/stdc++.h>
using namespace std;

bool hasDuplicate(vector<int> &nums)
{
    unordered_set<int> seen(nums.begin(), nums.end());
    return seen.size() < nums.size();
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 5, 7, 8, 9, 10};
    cout << hasDuplicate(nums) << endl;
    return 0;
}