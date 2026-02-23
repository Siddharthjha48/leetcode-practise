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
    bool istreeSymmetric(TreeNode*leftroot,TreeNode*rightroot){
        if(!leftroot  && !rightroot ){
            return true;
        }
        if((!leftroot && rightroot)  || (!rightroot && leftroot)){
            return false;
        }
        if(leftroot->val != rightroot->val){
            return false ;
        }

        return istreeSymmetric(leftroot->left,rightroot->right) && istreeSymmetric(leftroot->right,rightroot->left);
    }
    bool isSymmetric(TreeNode* root) {
        return istreeSymmetric(root->left,root->right) ;
    }
};