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
    void inorder(TreeNode*root,vector<int> &v){
        if(root == nullptr){
            return ;
        }
        inorder(root->left,v);
        v.push_back(root->val) ;
        inorder (root->right,v) ;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> A;
        vector<int> B;
        
        inorder(root1,A);
        inorder(root2,B);

    for(int i=0;i<B.size();i++){
        A.push_back(B[i]);
    }

    sort(A.begin(),A.end());

        return A ;
    }
};