#include <iostream>
#include <stdio.h>
#include <string.h>

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
    int sum = 0;
    void recur(TreeNode *root, string s)
    {
        if (root->left != NULL)
            recur(root->left, s += root->val);
        if (root->right != NULL)
            recur(root->right, s += root->val);

        if (root->left == NULL && root->right == NULL)
        {
            int total = 0, multiplier = 1;
            for (int i = 1; i < s.size(); i++)
            {
                total += s[i]*multiplier;
                multiplier*=10;
            }
            sum+=total;
        }
    }
    int sumNumbers(TreeNode *root)
    {
        string s = "";
        s += root->val;
        recur(root, s);
        return sum;
    }
};

int main()
{

    Solution sol = Solution();
    TreeNode *root = new TreeNode();
    cout << sol.sumNumbers(root) << endl;

    return 0;
}