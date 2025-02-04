#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums) {
    int l=0,r=nums.size()-1;
    while (l<r)
    {
        int mid=l+(r-l)/2;
        if (nums[mid]>nums[r]){
            l=mid+1;
        }else{
            r=mid;
        }
    }
    return nums[r];
    
}

int main(){
    vector<int> nums={3,4,5,6,1,2};
    cout<<findMin(nums)<<endl;
    return 0;
}