#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;
    for(int i = 0; i < nums.size(); i++){
        if(seen.find(target - nums[i]) != seen.end()){
            return {seen[target - nums[i]], i};
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for(int i : result) cout << i << " ";
    cout << endl;
    return 0;
}