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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            return new TreeNode(val);
        }
        TreeNode* tmp=root;
        while(true){
            if(val>tmp->val && tmp->right){
                tmp=tmp->right;
            }
            else if(val<tmp->val && tmp->left){
                tmp = tmp->left;
            }
            else{
                break;
            }
        }
        if(val>tmp->val){
            tmp->right = new TreeNode(val);
        }
        else{
            tmp->left = new TreeNode(val);
        }
        return root;
    }
};