#include "essentials.cpp"


struct bnode{
int data;
struct bnode*left;
struct bnode*right;



};


struct bnode*newNode(int data){


struct bnode*node=(struct bnode*)malloc(sizeof(struct bnode));
node->data=data;
node->right=NULL;
node->left=NULL;
return node;


}

void inorder(struct bnode*root){

if(root==NULL){
    return;
}
else{
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


}



void preorder(struct bnode*root){
    if(root==NULL){
        return;
    }
    else{

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);



    }
}


