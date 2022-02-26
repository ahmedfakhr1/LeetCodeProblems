class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* tmp = root;
        TreeNode* node = new TreeNode(val);
        if (root == NULL) {
            root = node;
            return root;
        }
        else{
            while (tmp!=NULL){
                if (tmp->val > val){
                    if (tmp->left != nullptr) {
                        tmp = tmp->left;
                    }
                    else{
                        tmp->left = node;
                        break;
                    }

                }
                else if (tmp->val <= val){
                    if (tmp->right != nullptr) {
                        tmp = tmp->right;
                    }
                    else{
                        tmp->right = node;
                        break;
                    }
                }

            }
        }

        return root;

    }
};
