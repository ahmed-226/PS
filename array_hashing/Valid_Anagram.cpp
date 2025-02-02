#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if(s.size() != t.size()) return false;
    unordered_map<char, int> freq;
    for(char c : s) freq[c]++;
    for(char c : t){
        if(freq.find(c) == freq.end()) return false;
        freq[c]--;
        if(freq[c] == 0) freq.erase(c);
    }
    return freq.empty();
}

int main(){
    string s = "anagram", t = "nagram";
    cout << isAnagram(s, t) << endl;
    return 0;
}