class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        if(!root)return v;
        s1.push(root);
        while(!s1.empty()){
            TreeNode* temp = s1.top();
            s1.pop();
            s2.push(temp);
            
            if(temp->left)s1.push(temp->left);
            if(temp->right)s1.push(temp->right);
        }
        while(!s2.empty()){
            v.push_back(s2.top()->val);
            s2.pop();
        }
        return v; 
    }
};