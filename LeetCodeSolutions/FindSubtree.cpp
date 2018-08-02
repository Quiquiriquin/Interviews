/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//Link of problem 
//https://leetcode.com/problems/subtree-of-another-tree/description/


class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {  
        if(s == NULL && t == NULL)
            return true;
        if(s == NULL || t == NULL)
            return false;
        if(s == NULL)
            return false;
        
        if(s->val == t->val){
            return true && isSubtree(s->left,t->left) && isSubtree(s->right,t->right); 
         }else {
            return isSubtree(s->left,t) || isSubtree(s->right,t);
        } 
        
    }
};