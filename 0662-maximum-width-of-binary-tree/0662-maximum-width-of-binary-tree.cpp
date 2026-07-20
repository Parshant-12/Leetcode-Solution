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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        if(root==NULL){
            return 0;
        }
        q.push({root,0});
        int mx = 0;
        while(!q.empty()){
            int size = q.size();
            int min_idx = q.front().second;
            int first,last;
            for(int i=0;i<size;i++){
                int curr_idx = q.front().second-min_idx;
                TreeNode* node = q.front().first;
                q.pop();

                if(i==0) first = curr_idx;
                if(i==size-1) last = curr_idx;
                if(node->right){
                    q.push({node->right,2*curr_idx+1});
                }
                if(node->left){
                    q.push({node->left,2*curr_idx+2});

                }
            }
            int w = last-first;
            mx = max(mx,w+1);
        }
        return mx;
    }
};