#include "binary_tree_essentials.cpp"

bool if_leaf(struct bnode*root){

if(root==NULL){
    return false;
}
else{
if(!root->right && !root->left){
    return true;
}
else{
    return false;
}



}


}



void printBoundary(struct bnode*root){

if(root==NULL){
    return;
}
else{
struct bnode*temp=root;
stack<struct bnode*>s;
queue<bnode*>q;
q.push(temp);
cout<<q.front()->data<<" ";
while(!q.empty()){

if(temp->left){
    q.push(temp->left);
}
if(temp->right){
    s.push(temp->right);

}


}






}



}






int main(){
   

    // struct bnode *root         = new_node(20);
    // root->left                = new_node(8);
    // root->left->left          = new_node(4);
    // root->left->right         = new_node(12);
    // root->left->right->left   = new_node(10);
    // root->left->right->right  = new_node(14);
    // root->right               = new_node(22);
    // root->right->right        = new_node(25);
    // // inorder(root);
    // cout<<if_leaf(root->left)<<endl;;
    // // printBoundary( root );
 
    return 0;
}
