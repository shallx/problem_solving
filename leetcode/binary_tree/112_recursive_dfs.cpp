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
    void toDept(TreeNode* root,int currentSum){
        if(root->left == nullptr && root->right == nullptr){
            printf("CurrentSum: %d\n", currentSum);
        }
        if(root->left != nullptr && currentSum+root->left->val <= targetSum){
            toDept(root->left, currentSum+root->left->val);
        }
        if(root->right != nullptr && currentSum+root->right->val <= targetSum){
            toDept(root->right, currentSum+root->right->val);
        }
        if((root->left == nullptr && root->right == nullptr) && targetSum == currentSum) found = true;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        this->targetSum = targetSum;
        toDept(root,root->val);
        return found;
    }
};

int main(){
    Solution sol = Solution();
    cout << sol.hasPathSum(new TreeNode(5), 22) << endl;
}