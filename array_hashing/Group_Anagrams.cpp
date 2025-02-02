#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> res;
    for (auto&str : strs){
        vector<int> count(26,0);
        for (auto&c :str){
            count[c-'a']++;
        }
        string hash_key="";
        for (int i : count){
            hash_key+="#" + to_string(i);
        }
        res[hash_key].push_back(str);
    }   
    vector<vector<string>> ans;
    for (auto&item: res){
        ans.push_back(item.second);
    }
    return ans;
}

int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    for (auto& group : result){
        for (string str : group){
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}