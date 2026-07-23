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
public:
    bool ans=false;
    void solve(TreeNode* root, int target,int sum){
        if(root==nullptr)
        return;
        sum+=root->val;
        if(root->left == nullptr && root->right == nullptr){
            if(sum==target){
                ans=true;
                return;
            }
        }
        else{
            solve(root->left,target,sum);
            solve(root->right,target,sum);
            return;
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        solve(root,targetSum,0);
        return ans;
    }
};