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
    bool solve(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr){
            return true;
        }
        if(p==nullptr || q==nullptr)
        return false;
        if(p->val!=q->val){
            return false;
        }
        bool r1=solve(p->left,q->right);
        bool r2=solve(p->right,q->left);
        return r1&&r2;

    }
    bool isSymmetric(TreeNode* root) {
        return solve(root,root);
    }
};