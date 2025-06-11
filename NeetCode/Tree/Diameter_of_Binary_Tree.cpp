#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution{

private:

    int maxDiameter=0;
    int height(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        if(root->left==nullptr && root->right==nullptr){
            return 0;
        }
        return 1+ max(height(root->left),height(root->right));
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {

        if(root==nullptr){
            return 0;
        }

        int leftHeight=height(root->left);
        int rightHeight=height(root->right);

        int diameter=leftHeight+rightHeight;

        maxDiameter=max(diameter,maxDiameter);

        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return maxDiameter;

    }
};


int main(){

    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    Solution obj;
    cout<<obj.diameterOfBinaryTree(root)<<endl;

    return 0;
}