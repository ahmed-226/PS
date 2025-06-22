class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if (k == 0 || n <= 1) return;  
        vector<int> result(n);
        
        
        for (int i = 0; i < n; i++) {
            result[(i + k) % n] = nums[i];
        }
        nums = result;
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if (k == 0 || n <= 1) return;  
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }

};