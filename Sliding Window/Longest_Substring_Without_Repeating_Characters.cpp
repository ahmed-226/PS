#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> freq(128, 0); 
    int l = 0, maxL = 0;

    for (int r = 0; r < s.length(); r++) {
        freq[s[r]]++;

        while (freq[s[r]] > 1) {
            freq[s[l]]--;
            l++;
        }

        maxL = max(maxL, r - l + 1);
    }

    return maxL;
}

int main(){
    string s="au";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}