#include <iostream>
#include <stdio.h>

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
    void invert(TreeNode* root){
        if(root != NULL){
            TreeNode* tempNode = root->left;
            root->left = root->right;
            root->right = tempNode;
            invert(root->left);
            invert(root->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};

int main(){
    TreeNode* root1= new TreeNode();
    Solution sol = Solution();
    cout << sol.invertTree(root1) << endl;

    return 0;
}