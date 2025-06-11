#include <bits/stdc++.h>
using namespace std;

// bool canFinish (vector<int> &piles,int mid, int h);

int minEatingSpeed(vector<int> &piles, int h)
{
    int maxPile=*max_element(piles.begin(),piles.end());
    int l=1,r=maxPile;

    auto canFinish=[&](int k) -> bool {
        int hours=0;
        for (int pile:piles){
            hours+=(pile+k-1)/k;
        }
        return hours<=h;    
    };

    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(canFinish(mid)){
        // if(canFinish(piles,mid,h)){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return l;
}


// bool canFinish (vector<int> &piles,int mid, int h){
//     int hours=0;
//     for (int pile : piles){
//         hours+=(pile + mid - 1) / mid;
//     }
//     return hours<=h;
// }

int main()
{
    vector<int> piles = {25,10,23,4};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}