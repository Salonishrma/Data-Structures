class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int last=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int cnt=q.size();
            for(int i=0;i<cnt;i++){
                TreeNode* current=q.front();
                q.pop();
                if(i==0){
                    last=current->val;
                }
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
            }
        }
        return last;
    }
};
