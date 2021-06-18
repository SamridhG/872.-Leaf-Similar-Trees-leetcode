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
public:
    vector<int>A,B;
   void ischeck2(TreeNode *root)
    {
        if(root!=NULL && root->right==NULL && root->left==NULL)
        {
            B.push_back(root->val);
        }
        else if(root!=NULL)
        {
            ischeck2(root->left);
            ischeck2(root->right);
        }
    }
    void ischeck1(TreeNode *root)
    {
        if( root!=NULL && root->right==NULL && root->left==NULL)
        {
            A.push_back(root->val);
        }
        else if(root!=NULL)
        {
            ischeck1(root->left);
            ischeck1(root->right);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        ischeck1(root1);
        ischeck2(root2);
        return A==B?1:0;
    }
};
