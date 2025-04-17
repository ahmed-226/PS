#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

 class Solution {
    private:
        int maxDepthVal = 0; 
    
    public:
        int maxDepth(TreeNode* root) {
            // maxDepthVal = 0; 
            // calcDepth(root, 1); 
            // return maxDepthVal;

            if(root==nullptr){
                return 0;
            }
            return 1+ max(maxDepth(root->left),maxDepth(root->right));

        }
    
        void calcDepth(TreeNode* root, int counter) {
            if (root == nullptr) {
                return;
            }
    
            if (counter > maxDepthVal) {
                maxDepthVal = counter;
            }
    
            calcDepth(root->left, counter + 1);
            calcDepth(root->right, counter + 1);
        }
    };
    