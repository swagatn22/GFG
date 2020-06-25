int findMirrorRec(int target, struct Node* left,
							struct Node* right)
{
    if(!left || !right){
        return -1;
    }
    if(left->key == target){
        return right->key;
    }
    if(right->key == target){
        return left->key;
    }
    int val1 = findMirrorRec(target,left->left,right->right);
    if(val1 != -1) return val1;
    return findMirrorRec(target,left->right,right->left);
}
