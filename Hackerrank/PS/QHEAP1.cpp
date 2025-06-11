#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;
#define ll long long

int main() {
    
    int q;
    cin>>q;
    
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    set<ll>elements;
    
    while(q--){
        int type;
        ll value;
        cin >> type;
        if(type==1){
            cin>>value;
            pq.push(value);
            elements.insert(value);
        }else if (type==2) {
            cin>>value;
            elements.erase(value);
        }else if (type==3) {
            while(!pq.empty() && elements.find(pq.top())==elements.end()){
                pq.pop();
            }            
            if(!pq.empty()){
                cout<<pq.top()<<endl;
            }
        }
    }
    
    return 0;
}
