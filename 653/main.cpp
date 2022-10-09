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

    void traverse(TreeNode* root,vector<int> &arr){
        if(root->left!=nullptr){
            traverse(root->left,arr);
        }
        arr.push_back(root->val);
        if(root->right!=nullptr){
            traverse(root->right,arr);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        int start,end;
        traverse(root,arr);
        start =0;
        end = arr.size()-1;
        while(end>start){
            if(arr[start]+arr[end]==k){
                return true;
            }
            if(arr[start]+arr[end]<k){
                start+=1;
            } else{
                end-=1;
            }
        }
        return false;
    }
};
