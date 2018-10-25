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

int get_height(struct btnode*root){

if(root==NULL){
    return 0;
}
else{
    return max(get_height(root->left),get_height(root->right)+1);
}

}



int get_diameter(struct btnode*root){

if(root==NULL){
    return 0;
}
else{


int leftheight=get_height(root->left);
int rightheight=get_height(root->right);

int ldia=get_diameter(root->left);
int rdia=get_diameter(root->right);



return max(leftheight+rightheight+1,max(ldia,rdia));


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



cout<<get_diameter(root)<<endl;


}
