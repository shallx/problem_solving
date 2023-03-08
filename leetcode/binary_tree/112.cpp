#include <iostream>

using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool found = false;
    int targetSum = 0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        if(root->left == NULL && root->right == NULL && targetSum == root->val) return true;
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
        return found;
    }
};

int main(){
    Solution sol = Solution();
    cout << sol.hasPathSum(new TreeNode(5), 22) << endl;
}