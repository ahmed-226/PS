class Solution {
public:
    // bool canJump(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<int>dp(n,0);
    //     dp[n-1]=1;

    //     for(int i=n-2; i >= 0 ;i--){
    //         int max_jump=nums[i];
    //         for( int j=1;j <= max_jump && i+j < n;j++){
    //             if(dp[i+j] == 1){
    //                 dp[i]=1;
    //                 break;
    //             }
    //         }
    //     }
    //     return dp[0]==1;
    // }
    bool canJump(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxi) return false;
            maxi=max(maxi,i+nums[i]);
        }
        return true;
    }

};