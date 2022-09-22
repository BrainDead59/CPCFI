
void decode_huff(node * root, string s) {
    node *actual = root;
    string sol="";
    for(auto z:s){
        if(z=='1'){
            actual=actual->right;
        }else{
            actual=actual->left;
        }
        if(actual->left==NULL && actual->right==NULL){
            sol+=actual->data;
            actual=root;
        }
    }
    cout << sol;
}
