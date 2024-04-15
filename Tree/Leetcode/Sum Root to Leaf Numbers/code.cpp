class Solution {
public:
 int totalSum =0;
 void findSum(TreeNode* root,int currentNumber){
    if(root ==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        totalSum+=(currentNumber * 10 + root->val);
    }
    else{
    currentNumber = currentNumber * 10 +root->val;
    }
    findSum(root->left,currentNumber);
    findSum(root->right,currentNumber); 
    
 }
    int sumNumbers(TreeNode* root) {
    findSum(root,0);
    return totalSum;
    }
};
