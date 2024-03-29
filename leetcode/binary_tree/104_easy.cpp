
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

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if(root == nullptr) return 0;
        int maxLeft = 0;
        int maxRight = 0;

        if(root->left){
            maxLeft = maxDepth(root->left);
        }
        if(root->right){
            maxRight = maxDepth(root->right);
        }

        return 1 + max(maxLeft, maxRight);
    }
    
};