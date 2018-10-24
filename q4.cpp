#include"essentials.cpp"



struct avl_node{

int data;
struct avl_node*right;
struct avl_node*left;
};


struct avl_node*new_node(int data){

struct avl_node*node=(struct avl_node*)malloc(sizeof(struct avl_node));
node->left=NULL;
node->right=NULL;
node->data=data;
return node;


}







int get_height(struct avl_node*root){


if(root==NULL){
    return 0;
}
else return(max(get_height(root->right),get_height(root->left))+1);

}


int get_balancing_factor(struct avl_node*root){

if(root==NULL){
    return 0;
}
else if(!root->left && !root->right){
    return 0;
}
else 
{


int lh=get_height(root->left);

int rh=get_height(root->right);

return lh-rh;

// cout<<lh-rh<<" ";
}







}



struct avl_node*rightrotate(struct avl_node*parent){

struct avl_node*temp;
temp=parent->left;
parent->left=temp->right;
temp->right=parent;
return temp;

}



struct avl_node*leftrotate(struct avl_node*parent){


struct avl_node*temp;
temp=parent->right;
parent->right=temp->left;
temp->left=parent;
return temp;


}



struct avl_node*rightleft(struct avl_node*parent){

// struct avl_node*temp;
parent->right=rightrotate(parent->right);
return leftrotate(parent);


}



struct avl_node*leftright(struct avl_node*parent){
parent->left=leftrotate(parent->left);
return rightrotate(parent); 

}




struct avl_node*insert(struct avl_node*root,int data){

if(root==NULL){
    return new_node(data);
}
if(data<root->data){
    root->left=insert(root->left,data);
    // root=balance_tree(root);
}
else if(data>root->data){
root->right=insert(root->right,data);
// root=balance_tree(root);
}
else {
    return root;
}

int bf=get_balancing_factor(root);

if(bf>1 && data<root->left->data){
    return rightrotate(root);
}
if(bf>1 && data>root->left->data){
    return leftright(root);
}

if(bf<-1 && data>root->right->data){
    return leftrotate(root);
}
if(bf<-1 && data<root->right->data){
    return rightleft(root);
}
return root;


}



int count_in_range(struct avl_node*root, int n1, int n2){

int count=0;



if(root==NULL){
    return 0;
}

else{
count+=count_in_range(root->left,n1,n2);

if(root->data>=n1 && root->data<=n2){
    count ++;
    cout<<root->data<<" ";

}


count+=count_in_range(root->right,n1,n2);


}
return count;



}



int main(){

struct avl_node*root=NULL;
root=insert(root,9);
root=insert(root,5);
root=insert(root,10);
root=insert(root,0);
root=insert(root,6);
root=insert(root,11);
root=insert(root,-1);
root=insert(root,1);
root=insert(root,2);
int count=count_in_range(root,0,5);
cout<<endl;
cout<<count<<endl;

return 1;


}

