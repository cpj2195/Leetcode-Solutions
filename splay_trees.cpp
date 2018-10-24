#include "essentials.cpp"


struct splay_node{
    struct splay_node*right;
    struct splay_node*left;
    int data;
};


struct splay_node*newnode(int data){

struct splay_node*node=(struct splay_node*)malloc(sizeof(struct splay_node));
node->left=NULL;
node->right=NULL;
node->data=data;
return node;



}




struct splay_node*rightrotate(struct splay_node*parent){

struct splay_node*temp;
temp=parent->left;
parent->left=temp->right;
temp->right=parent;
return temp;

}



struct splay_node*leftrotate(struct splay_node*parent){


struct splay_node*temp;
temp=parent->right;
parent->right=temp->left;
temp->left=parent;
return temp;


}



struct splay_node*rightleft(struct splay_node*parent){

// struct splay_node*temp;
parent->right=rightrotate(parent->right);
return leftrotate(parent);


}



struct splay_node*leftright(struct splay_node*parent){
parent->left=leftrotate(parent->left);
return rightrotate(parent); 


}


struct splay_node*search_item(struct splay_node*root,int key){

if(root=NULL){
    return NULL;
}

else if(root->data==key){
    return root;
}
else if(root->right->data==key){
    return leftrotate(root);
}
else if(root->left->data==key){

return rightrotate(root);

}
else if(key<root->data){
    root->left=search_item(root->left,key);
}
else if(key>root->data){
    root->right=search_item(root->right,key);
}























}