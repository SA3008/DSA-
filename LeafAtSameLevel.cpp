class Solution{
  public:
    /*You are required to complete this method*/
    
    
    int ans;
    
    void findHeight(Node* root, int height, int &cmp ){
        if(!root)return;
        if(ans==0)return ;
        
        if(!root->left and !root->right){
            if(cmp == -1){
                cmp = height;
            }else{
                if(cmp!=height){
                    ans = 0;
                }
            }
            return;
        }
        findHeight(root->left,height+1,cmp );
        findHeight(root->right,height+1,cmp);
    }
    
    bool check(Node *root)
    {
        //Your code here
        
        int cmp = -1;
        int height = 0;
        ans = 1;
        findHeight(root, height, cmp);
        return ans;
    }
};