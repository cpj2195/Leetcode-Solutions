#include"essentials.cpp"



struct btnode{
int data;
struct btnode*left;
struct btnode*right;



};


struct btnode*NewNode(int data){


struct btnode*node=(struct btnode*)malloc(sizeof(struct btnode));
node->data=data;
node->right=NULL;
node->left=NULL;
return node;


}




bool is_present(struct btnode*root,int n)
{
if(root==NULL){
    return false;
}
else if(root->data==n){
    return true;
}
else if(n<root->data){
return is_present(root->left,n);
}
else return is_present(root->right,n);



}





struct btnode*lca_in_bst(struct btnode*root,int n1,int n2){

if(root==NULL){
    return NULL;
}

if(!is_present(root,n1) || !is_present(root,n2)){
    return NULL;
}

if(n1==root->data || n2==root->data){
    return root;
}

else if(n1<root->data && n2<root->data){
    return lca_in_bst(root->left,n1,n2);

}
else if(n1>root->data && n2>root->data){
    return lca_in_bst(root->right,n1,n2);
}
else {
    return root;
}



}


void get_lca_bst(struct btnode*root,int n1,int n2){


    struct btnode*temp=lca_in_bst(root,n1,n2);

    if(temp){
        cout<<temp->data<<endl;
        }
    else{
        cout<<"No Least Common Ancestor Available"<<endl;
    }


}



int main(){


struct btnode *root = NewNode(38);
    root->left     = NewNode(30);
    root->right     = NewNode(56);
    root->left->right = NewNode(35);
    root->left->right->left = NewNode(32);
    root->left->right->right = NewNode(36);
    root->right->right = NewNode(60);
    root->right->left = NewNode(40);
    root->left->left=NewNode(20);


get_lca_bst(root,56,60);
return 1;

}