//*  Print Root to Node Path in Binary Tree
/*
bool getPath(TreeNode* root, vector<int> &arr, int x){
    if(root == NULL) // or if(!root)
        return false;

    arr.push_back(root->val)

    if(root_>val == x)
        return true;

    if(getPath(root->left, arr, x) || getPath(root->right, arr, x)){
        return true;
    }

    arr.pop_back();
    return false;
}

vector<int> NodePath(TreeNode* root, int B){

    vector<int> arr;
    if(root == NULL){
        return arr;
    }
    getPath(A, arr, B);
    return arr;
}

*/