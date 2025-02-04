#include<bits/stdc++.h>
using namespace std;

// int trap(vector<int>& height) {
//     int n = height.size();
//     if (n == 0) return 0;
//     vector<int> left(n), right(n);
//     left[0] = height[0];
//     right[n-1] = height[n-1];
//     for (int i = 1; i < n; i++) {
//         left[i] = max(left[i-1], height[i]);
//     }
//     for (int i = n-2; i >= 0; i--) {
//         right[i] = max(right[i+1], height[i]);
//     }
//     int ans = 0;
//     for (int i = 0; i < n; i++) {
//         ans += min(left[i], right[i]) - height[i];
//     }
//     return ans;
// }

int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;
    int left = 0, right = n-1;
    int leftMax = height[left], rightMax = height[right];
    int ans = 0;
    while (left < right) {
        if (leftMax < height[right]) {

            left++;
            leftMax = max(leftMax, height[left]);
            ans += leftMax - height[left];
            
        } else {

            right--;
            rightMax= max(rightMax, height[right]);
            ans += rightMax - height[right];
            
        }
    }
    return ans;
}

int main (){
    vector<int>height = {0,2,0,3,1,0,1,3,2,1};
    cout << trap(height);
}