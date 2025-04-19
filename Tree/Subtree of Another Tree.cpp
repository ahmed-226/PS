/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 class Solution {
    private:
        void preorder(TreeNode* root, vector<string>& out) {
            if (!root) {
                out.push_back("#");
                return;
            }
            out.push_back(to_string(root->val));
            preorder(root->left, out);
            preorder(root->right, out);
        }
    
        bool isSameTree(TreeNode* p, TreeNode* q) {
            vector<string> pre1, pre2;
            preorder(p, pre1);
            preorder(q, pre2);
            return pre1 == pre2;
        }
    
    public:
        bool isSubtree(TreeNode* root, TreeNode* subRoot) {
            if (!root) return false;
    
            if (isSameTree(root, subRoot)) {
                return true;
            }
            return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot); ;
        }
    };
    
    
    
    
    
    
    
    