#include "binary_tree_essentials.cpp"


void binary_tree_to_dll(struct bnode*root,struct bnode**head){

if(root==NULL){
    return ;
}
else{

static struct bnode*temp=NULL;

binary_tree_to_dll(root->left,head);

if(temp==NULL){
    temp=root;
    *head=temp;
}
else{
    temp->right=root;
    root->left=temp;
    temp=root;
    
}

binary_tree_to_dll(root->right,head);



}





}

void print_list(struct bnode*root){

while(root->right){
    cout<<root->data<<" ";
    root=root->right;
}


}
int i=0;
void store_inorder(struct bnode*root , int (&array)[100]){
    if(root==NULL){
        return;
    }
   
    store_inorder(root->left,array);
            array[i++]=root->data;
    
    store_inorder(root->right,array);


}













int main(){


 struct bnode *root        = newNode(10);
    root->left        = newNode(12);
    root->right       = newNode(15);
    root->left->left  = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);

// inorder(root);
cout<<endl;
int array[100];
store_inorder(root,array);
print_array(array,i);
struct bnode*head=NULL;
// binary_tree_to_dll(root,&head);
// print_list(head);
return 1;


}