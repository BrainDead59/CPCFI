void preOrder(Node *root) {
        cout << root->data << " ";
        if(root->left) preOrder(root->left);
        if(root->right) preOrder(root->right);
    }
