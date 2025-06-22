class Solution {
public:
    // int strStr(string haystack, string needle) {
    //     for(int i=0;i<haystack.size();i++){
    //         if(haystack[i]==needle[0]){
    //             int firstIdx=i;
    //             bool isoccurrence=true;
    //             for(int j=0;j<needle.size();j++){
    //                 if(haystack[i+j]!=needle[j]){
    //                     isoccurrence=false;
    //                     break;
    //                 }
    //             }
    //             if (isoccurrence) return firstIdx;
    //         }
    //     }   
    //     return -1;
    // }

    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle) return i;
        }
        return -1;
    }
};