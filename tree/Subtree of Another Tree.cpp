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
    bool match(TreeNode* root, TreeNode* subRoot)
    {
        if(root==NULL && subRoot!=NULL) return false;
        else if(root!=NULL && subRoot==NULL) return false;
        else if(root==NULL && subRoot==NULL) return true;
        else if(root!=NULL && subRoot!=NULL)
        {
            bool l=match(root->left,subRoot->left);
            bool r=match(root->right,subRoot->right);
            
            if((l==true && r==true) && (root->val==subRoot->val)) return true;
            else return false;
        }
        else return false;
    }
    bool ans=false;
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root!=NULL)
        {
            isSubtree(root->left,subRoot);
            bool a=match(root,subRoot);
            if(a) ans=a;
            isSubtree(root->right,subRoot);
        }
        return ans;
    }
};
