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
private:
int dfs(TreeNode* node, int maxVal){
    if(node == nullptr) return 0;

    int cnt = 0;

    if(node->val >= maxVal) {
        cnt = 1;
        maxVal = node->val;
    }
    cnt+=dfs(node->left, maxVal);
    cnt+=dfs(node->right, maxVal);

    return cnt;
}
public:
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};
