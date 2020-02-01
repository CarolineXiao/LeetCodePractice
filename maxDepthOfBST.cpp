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
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        int maxDepthLeft = maxDepth(root->left);
        int maxDepthRight = maxDepth(root->right);
        return 1+ max(maxDepthLeft, maxDepthRight);

    }
        
};
