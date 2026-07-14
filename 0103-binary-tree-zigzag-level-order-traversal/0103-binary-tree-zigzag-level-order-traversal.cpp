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
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        vector<int>tmp;
        if(root==NULL){
            return ans;
        }
        int toggle=1;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            tmp.clear();
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                tmp.push_back(node->val);
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            if(toggle==0){
                reverse(tmp.begin(),tmp.end());
                ans.push_back(tmp);
                toggle=1;
            }
            else{
                ans.push_back(tmp);
                toggle=0;
            }
        }
        return ans;
    }
};