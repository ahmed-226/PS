#include<bits/stdc++.h>
using namespace std;


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n=nums1.size(),m=nums2.size();
    if(n>=m){
        return findMedianSortedArrays(nums2,nums1);
    }
    int l=0,r=n;
    while (l<=r)
    {
        int part1=(l+r)/2;
        int part2=(m+n+1)/2-part1;

        int maxleft1 = (part1 == 0) ? INT_MIN : nums1[part1 - 1];
        int minright1 = (part1 == n) ? INT_MAX : nums1[part1];

        int maxleft2 = (part2 == 0) ? INT_MIN : nums2[part2 - 1];
        int minright2 = (part2 == m) ? INT_MAX : nums2[part2];

        if(maxleft1<=minright2 && maxleft2<=minright1){
            if ((m+n)%2==0){
                return (max(maxleft1,maxleft2)+min(minright1,minright2))/2.0;
            }else{
                return max(maxleft1,maxleft2);
            }
        }else if (maxleft1>minright2){
            r=part1-1;
        }else{
            l=part1+1;
        }
    }
    return -1;  
}

int main(){
    vector<int> nums1={1,2,3,4,5,6,7,8};
    vector<int> nums2={1,2,3,4};
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;

}