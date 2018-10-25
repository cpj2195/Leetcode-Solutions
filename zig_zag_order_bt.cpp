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

int get_height1(struct btnode*root){

if(root==NULL){
    return -1;
}
else{
    return max(get_height1(root->left),get_height1(root->right)+1);
}

}


void print_level(struct btnode*root,int level,bool flag){

if(root==NULL){
    return;
}
if(level==0){
    cout<<root->data<<" ";
}
else{

if(flag){
print_level(root->left,level-1,flag);
print_level(root->right,level-1,flag);

}



else{
    print_level(root->right,level-1,flag);
    print_level(root->left,level-1,flag);
    
}


}


}


void zigzag_fashion(struct btnode*root){

bool flag=true;
if(root==NULL){
    return;
}
else{

int height=get_height1(root);



for(int i=0;i<=height;i++){
    
    print_level(root,i,flag);
    flag=!flag;
}

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




zigzag_fashion(root);

return 1;



}