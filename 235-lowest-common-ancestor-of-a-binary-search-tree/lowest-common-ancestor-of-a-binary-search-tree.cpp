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
    void solve(TreeNode* r, TreeNode* p, TreeNode* q){
        if(r==nullptr)
        return;
        if(r==p || r==q){
            ans=r;
            return;
        }
        if(r->val > p->val && r->val < q->val){
            ans=r;
            return;
        }
        if(r->val < p->val && r->val > q->val){
            ans=r;
            return;
        }

        
        
        if(r->val > p->val && r->val > q->val)
        solve(r->left,p,q);
        if(r->val < p->val && r->val < q->val)
        solve(r->right,p,q);
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        solve(root,p,q);
        return ans;
    }
};