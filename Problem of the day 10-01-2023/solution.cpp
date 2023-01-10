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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base cases
        if(p==NULL && q==NULL)
            return true;
        if((p!=NULL && q==NULL) || (p==NULL && q!=NULL))
            return false;
        //checking they both have equal left nodes
        bool left=isSameTree(p->left,q->left);
        // checking they both have equal right nodes
        bool right=isSameTree(p->right,q->right);
        // if we are standing at same node compare the values
        bool curr=( p->val==q->val);
        //if all values and structure is same then return true else false 
        return (left && right && curr) ? true : false;

        
    }
};