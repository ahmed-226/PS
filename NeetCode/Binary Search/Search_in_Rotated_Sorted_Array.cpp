#include<bits/stdc++.h>
using namespace std;


// You are given an array of length n which was originally sorted in ascending order. It has now been rotated between 1 and n times. For example, the array nums = [1,2,3,4,5,6] might become:

// [3,4,5,6,1,2] if it was rotated 4 times.
// [1,2,3,4,5,6] if it was rotated 6 times.
// Given the rotated sorted array nums and an integer target, return the index of target within nums, or -1 if it is not present.

// You may assume all elements in the sorted rotated array nums are unique,

// A solution that runs in O(n) time is trivial, can you write an algorithm that runs in O(log n) time?

int search(vector<int>& nums, int target) {
    int l=0,r=nums.size()-1,mid=0;
    while (l<=r)
    {
        mid=l+(r-l)/2;
        
        if (nums[mid] == target)  // Found target
            return mid;

        if (nums[l]<=nums[mid]){
            if (nums[l]<=target && target<nums[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        else{
            if (nums[mid]<target && target<=nums[r]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
    }
    return -1;
    
}

int main(){
    vector<int> nums={3,4,5,6,1,2};
    int target=2;
    cout<<search(nums,target)<<endl;
    return 0;
}