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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>>res;
        if(root==nullptr)
        return {};
        
        queue<TreeNode*>q;
        q.push(root);
        int order=1;
        while(!q.empty()){
            int curr=q.size();
            vector<int>temp(curr);
            
            int first=0;
            int last=curr-1;
            while(curr--){
                TreeNode* t=q.front();
                q.pop();
                if(order==1){
                    temp[first]=t->val;
                    first++;
                   
                }
                else{
                    temp[last]=t->val;
                    last--;
                    
                }
                if(t->left!=nullptr)
                q.push(t->left);
                if(t->right!=nullptr)
                q.push(t->right);
            }
            order=1-order;
            res.push_back(temp);

        }
        return res;
        
    }
    
};