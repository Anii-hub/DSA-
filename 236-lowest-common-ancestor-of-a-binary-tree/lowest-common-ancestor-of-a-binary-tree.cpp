/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* ans=nullptr;
    int solve(TreeNode* root, TreeNode* p, TreeNode* q){
         if(root==nullptr){
            return 0;
        }
        bool left=solve(root->left,p,q);
        bool right=solve(root->right,p,q);
        bool self=0;
        if(root==p || root==q){
            self=1;
        }
        int total = self + left + right;
        
        
        if( total==2 && ans==nullptr){
             ans=root;
             
        }
        return total;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        solve(root,p,q);
        return ans;

    }
};