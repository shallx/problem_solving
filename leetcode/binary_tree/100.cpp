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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        else if((p == NULL && q != NULL) || (q == NULL && p != NULL)) return false;
        else if(p->val == q->val){
            return isSameTree(p->left,q->left) && isSameTree(p->right, q->right);
        }
        else return false;
    }
};

int main(){
    TreeNode* root1= new TreeNode();
    TreeNode* root2= new TreeNode();
    Solution sol = Solution();
    cout << sol.isSameTree(root1, root2) << endl;

    return 0;
}