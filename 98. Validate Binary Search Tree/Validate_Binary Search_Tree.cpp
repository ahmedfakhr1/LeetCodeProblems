class Solution {
public:
int arr[10000];
int i = 0;
int size = 0;
void inorderTraversal(TreeNode* node){
    if (node == NULL) return;
    else{
    inorderTraversal(node->left);
    arr[i++]=node->val;
    size++;
    inorderTraversal(node->right);}

}
    bool isValidBST(TreeNode* root) {
                inorderTraversal(root);
        if (size == 0) return true;
        for(int i = 1 ;i<size;i++){
            if (arr[i-1]< arr[i]) continue;
            else return false;
        }
        return true;
    }
};
