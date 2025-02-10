#include<bits/stdc++.h>
using namespace std;

// O(n^n)
// vector<int> twoSum(vector<int>& numbers, int target) {
//     vector<int> res;
//     for (int i=0;i<numbers.size();i++){
//         auto it =find(numbers.begin(),numbers.end(),target-numbers[i]);
//         if (it != numbers.end()) res.push_back(i+1);
//     }
//     return res;
// }

// O(n)
vector<int> twoSum(vector<int>& numbers, int target) {
    int l=0;
    int r=numbers.size()-1;
    while (l<r)
    {
        int sum=numbers[l]+numbers[r];
        if (sum==target){
            return {l+1,r+1};
        }else if (sum<target) {
            l++;
        }else{
            r--;
        }
    }
    return {};
    
}

int main (){
    vector<int>numbers = {1,2,3,4};
    int target = 3;

    vector<int> ans =twoSum(numbers,target);
    for (int i :ans){
        cout << i ;
    }
}