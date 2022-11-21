class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int level = 1;
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(!root)return ans;
        
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            vector<int>v;
            
            if(level%2!=0){
                for(int i = 0;i<n;i++){
                    TreeNode* temp = q.front();
                    q.pop();
                    v.push_back(temp->val);
                    if(temp->left)q.push(temp->left);
                    if(temp->right)q.push(temp->right);
                }
                 level++;
                 
            }else{
                for(int i = 0;i<n;i++){
                    TreeNode* temp = q.front();
                    q.pop();
                    v.push_back(temp->val);
                    if(temp->left)q.push(temp->left);
                    if(temp->right)q.push(temp->right);   
                }
                 level++;
                reverse(v.begin(),v.end());
               
            }
            
            ans.push_back(v);
        }
            
        return ans;   
    }
};