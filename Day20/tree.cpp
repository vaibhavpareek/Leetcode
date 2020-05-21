// SOlution:
// Technique: In-order Traversal
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
    void inorder(TreeNode *root,int &count,int &value,int k)
    {
        if(root==NULL)
            return;
        
        inorder(root->left,count,value,k);
        count++;
        if(count==k)
            value=root->val;
        inorder(root->right,count,value,k);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
     int count=0;
        int value=0;
       inorder(root,count,value,k); 
        return value;
        
    }
};