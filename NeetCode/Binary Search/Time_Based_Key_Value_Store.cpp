#include<bits/stdc++.h>
using namespace std;

class TimeMap {
    public:
        // unordered_map<string, map<int,string>> m;
        unordered_map<string, vector<pair<int,string>>> m;
        
        TimeMap() {}
        
        void set(string key, string value, int timestamp) {
            m[key].emplace_back(timestamp, value);
        }
        
        // string get(string key, int timestamp) {
        //     auto it=m[key].upper_bound(timestamp);
        //     return it==m[key].begin() ? "" : prev(it)->second;            
        // }

        string get(string key, int timestamp) {
            auto& value=m[key];
            int l=0,r=value.size()-1;
            string result="";
            while (l<=r)
            {
                int mid=l+(r-l)/2;
                if (value[mid].first<=timestamp){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            return r==-1 ? "" : value[r].second;
        }

    };
    
    /**
     * Your TimeMap object will be instantiated and called as such:
     * TimeMap* obj = new TimeMap();
     * obj->set(key,value,timestamp);
     * string param_2 = obj->get(key,timestamp);
     */

int main(){
    TimeMap* timeMap = new TimeMap();
    timeMap->set("alice", "happy", 1);  // store the key "alice" and value "happy" along with timestamp = 1.
    cout<<timeMap->get("alice", 1)<<endl;           // return "happy"
    cout<<timeMap->get("alice", 2)<<endl;           // return "happy"
    timeMap->set("alice", "sad", 3);    // store the key "alice" and value "sad" along with timestamp = 3.
    cout<<timeMap->get("alice", 3)<<endl;           // return "happy"
    return 0;
}