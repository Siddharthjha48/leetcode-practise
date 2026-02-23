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
int mini = INT_MAX;
    int inorder(TreeNode* root,vector<int> &arr){
        if(!root) return 0;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
        return 0;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        inorder(root,arr) ;

        for(int i=0;i<arr.size()-1;i++){
            mini = min(mini,arr[i+1]-arr[i]);
        }
        return mini; 
        
    }
};