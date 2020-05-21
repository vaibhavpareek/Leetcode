// SOlution:
// Technique: Pre-order Traversal
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
    void preorder(TreeNode *root,int &count,int &value,int k)
    {
        if(root==NULL)
            return;
        
        preorder(root->left,count,value,k);
        count++;
        if(count==k)
            value=root->val;
        preorder(root->right,count,value,k);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
     int count=0;
        int value=0;
       preorder(root,count,value,k); 
        return value;
        
    }
};