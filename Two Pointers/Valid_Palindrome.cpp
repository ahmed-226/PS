#include<bits/stdc++.h>
using namespace std;

string encode(string&s);

bool isPalindrome(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    s=encode(s);
    int l=0;
    int r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;
        r--;
    }
    return true;  
}

string encode(string&s){
    string res="";
    for(char c:s){
        if(isalnum(c)) res+=tolower(c);
    }
    return res;
}


int main(){
    string str ="Was it a car or a cat I saw?";
    cout<<isPalindrome(str)<<endl;
    return 0;
}
