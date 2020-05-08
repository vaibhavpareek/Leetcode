// Solution :
// Technique : Level Order Traversal
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if (root == NULL) 
        return false; 
  
    TreeNode* parA = NULL; 
    TreeNode* parB = NULL; 
    queue<pair<TreeNode*, TreeNode*> > q; 
    TreeNode* tmp = new TreeNode(-1); 
    pair<TreeNode*, TreeNode*> ele; 
    q.push(make_pair(root, tmp)); 
    int levSize; 
  
    while (!q.empty()) { 
  
        levSize = q.size(); 
        while (levSize) { 
  
            ele = q.front(); 
            q.pop(); 
  
            if (ele.first->val == x) { 
                parA = ele.second; 
            } 
  
            if (ele.first->val == y) { 
                parB = ele.second; 
            } 
  
            if (ele.first->left) { 
                q.push(make_pair(ele.first->left, ele.first)); 
            } 
  
            if (ele.first->right) { 
                q.push(make_pair(ele.first->right, ele.first)); 
            } 
  
            levSize--; 
            if (parA && parB) 
                break; 
        } 
  
        if (parA && parB) { 
            return parA != parB; 
        } 
  
        if ((parA && !parB) || (parB && !parA)) { 
            return false; 
        } 
    } 
  
    return false; 
        
        
    }
};