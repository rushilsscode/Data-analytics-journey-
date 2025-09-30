
// function for counting the node
    int cntnode(struct Node* tree){
        if(root == NULL){
            return 0;
        }
        return 1+cntnode(root->left) + cntnode(root->right);
    }