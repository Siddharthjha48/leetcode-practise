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
        vector<vector<int>> ans ;
        if(root == nullptr){
            return ans ;
        }
        queue<TreeNode*>q ;
        int l = 0;
        q.push(root) ;
        while(!q.empty()){
            vector<int> level ;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode*front = q.front();
                q.pop() ;
                level.push_back(front->val);
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }

            }
            l++ ;
            if(l%2 == 0){
                reverse(level.begin(),level.end());
            }
                ans.push_back(level);
        }
            return ans ;

        
    }
};