#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
private:
    void preorder(TreeNode *root, vector<string> &out)
    {
        if (!root)
        {
            out.push_back("#");
            return;
        }
        out.push_back(to_string(root->val));
        preorder(root->left, out);
        preorder(root->right, out);
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<string> pre1, pre2;
        preorder(p, pre1);
        preorder(q, pre2);
        return pre1 == pre2;
    }

public:
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        if (!root)
            return false;

        if (isSameTree(root, subRoot))
        {
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        ;
    }
};


int main()
{
    TreeNode *root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    TreeNode *subRoot = new TreeNode(2);
    subRoot->left = new TreeNode(0);
    subRoot->right = new TreeNode(4);

    Solution obj;
    cout << obj.isSubtree(root, subRoot) << endl;
}