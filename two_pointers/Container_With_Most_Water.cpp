#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& heights) {
    int maxArea=0;
    int l=0,r=heights.size()-1;
    while(l<r){
        maxArea=max(maxArea,min(heights[l],heights[r])*(r-l));
        if(heights[l]<heights[r]){
            l++;
        }else{
            r--;
        }        
    }
    return maxArea;
}

int main(){
    vector<int> heights={1,7,2,5,4,7,3,6};
    cout<<maxArea(heights)<<endl;
    return 0;
}
    