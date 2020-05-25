// Solution:
// Technique : DIvide and COnqueror
class Solution {
public:
    TreeNode* buildtree(vector<int>&preorder ,int &index,int low,int high , int size)
    {
        if(index >=size || low > high)
            return NULL;
        TreeNode *root = new TreeNode(preorder[index]);
        index++;
        if(low==high)
            return root;
        int i;
        for(i=low;i<=high;i++)
        {
            if(root->val < preorder[i])
                break;
        }
        root->left = buildtree(preorder,index,index,i-1,size);
        root->right = buildtree(preorder,index,i,high,size);
        return root;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        int low=0;
        int high=preorder.size()-1;
        int size = preorder.size();
        TreeNode *root = buildtree(preorder,index,low,high,size);
        return root;
    }
};