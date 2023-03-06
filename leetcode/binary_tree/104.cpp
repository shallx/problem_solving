
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
    int count = 0;
    void dfs(TreeNode *node, int depth){
        if(node->left != nullptr){
            dfs(node->left, depth+1);
        }
        if(node->right != nullptr){
            dfs(node->right, depth+1);
        }
        if(node->right == nullptr && node->left == nullptr){
            count = max(count, depth);
        }
        
    }
    int maxDepth(TreeNode *root)
    {
        if(root == nullptr) return 0;
        dfs(root, 1);
        return count;
    }
    
};