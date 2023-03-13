#include <iostream>
#include <stdio.h>
#include <queue>

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

struct TreeNode *insertValue(struct TreeNode *root, int value,
                             queue<TreeNode *> &q);
TreeNode *createTree(int arr[], int n);
void levelOrder(struct TreeNode *root);

class Solution
{
public:
    bool isMirror(TreeNode *left, TreeNode *right)
    {
        if (left == NULL && right == NULL)
            return true;

        if (left && right && left->val == right->val)
        {
            return isMirror(left->left, right->right) && isMirror(left->right, right->left);
        }
        else return false;
            
    }
    bool isSymmetric(TreeNode *root)
    {
        return isMirror(root->left, root->right);
    }
};

int main()
{
    Solution sol = Solution();

    int arr[] = {1, 2, 2, 3, 4, 4, 3};
    TreeNode *root = createTree(arr, 7);
    cout << sol.isSymmetric(root) << endl;
    return 0;
}

struct TreeNode *insertValue(struct TreeNode *root, int value,
                             queue<TreeNode *> &q)
{
    TreeNode *node = new TreeNode(value);
    if (root == NULL)
        root = node;

    // The left child of the current Node is
    // used if it is available.
    else if (q.front()->left == NULL)
        q.front()->left = node;

    // The right child of the current Node is used
    // if it is available. Since the left child of this
    // node has already been used, the Node is popped
    // from the queue after using its right child.
    else
    {
        q.front()->right = node;
        q.pop();
    }

    // Whenever a new Node is added to the tree, its
    // address is pushed into the queue.
    // So that its children Nodes can be used later.
    q.push(node);
    return root;
}

TreeNode *createTree(int arr[], int n)
{
    TreeNode *root = NULL;
    queue<TreeNode *> q;
    for (int i = 0; i < n; i++)
        root = insertValue(root, arr[i], q);
    return root;
}

// This is used to verify the logic.
void levelOrder(struct TreeNode *root)
{
    if (root == NULL)
        return;
    queue<TreeNode *> n;
    n.push(root);
    while (!n.empty())
    {
        cout << n.front()->val << " ";
        if (n.front()->left != NULL)
            n.push(n.front()->left);
        if (n.front()->right != NULL)
            n.push(n.front()->right);
        n.pop();
    }
}