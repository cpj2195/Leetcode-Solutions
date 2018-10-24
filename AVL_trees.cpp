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

void get_levelorder(struct avl_node*root){

std::queue<struct avl_node*>q1;
if(root==NULL){
    return;
}
else{

// struct avl_node*temp=root;
q1.push(root);
while(!q1.empty()){

struct avl_node*temp=q1.front();
q1.pop();
cout<<temp->data<<" "<<get_balancing_factor(temp)<<endl;
// cout<<get_balancing_factor(temp)<<

if(temp->left){
    q1.push(temp->left);
}
if(temp->right){
    q1.push(temp->right);
}


}
}


}
 void get_bf(struct avl_node*root){

if(root==NULL){
    return;
}
get_bf(root->left);
cout<<root->data<<" "<<get_balancing_factor(root)<<endl;
get_bf(root->right);


}





void get_inorder(struct avl_node*root){

if(root==NULL){
    return;
}
else{
    cout<<root->data<<" ";
    
get_inorder(root->left);

get_inorder(root->right);

}



}

struct avl_node*get_minnode(struct avl_node*root){

if(root==NULL){
    return NULL;
}
else{
struct avl_node*temp=root;

while(temp->left){
    temp=temp->left;

}
return temp;
}

}






struct avl_node*delete_node(struct avl_node*root,int key){


if(root==NULL){
    return root;
}

else if(key<root->data){
    root->left=delete_node(root->left,key);

}
else if(key>root->data){

root->right=delete_node(root->right,key);



}

else{

if(!root->left && !root->right && root->data==key)
{
    free(root);
    root=NULL;
    
   
}

else if(!root->left && root->right){


struct avl_node*temp=root;
root=root->right;

free(temp);
temp=NULL;

}


else if(!root->right && root->left){
    
struct avl_node*temp=root;
root=root->left;
// *root=*temp;
free(temp);
temp=NULL;

}


else if(root->left && root->right){


struct avl_node*min=get_minnode(root->right);
root->data=min->data;
root->right=delete_node(root->right,min->data);

}
}


int bf=get_balancing_factor(root);
// cout<<bf<<endl;

if(bf>1 && get_balancing_factor(root->left)>=0){
    
    return rightrotate(root);
}
if(bf>1 && get_balancing_factor(root->left)<0){
    return leftright(root);
}

if(bf<-1 && get_balancing_factor(root->right)<=0){
    return leftrotate(root);
}
if(bf<-1 && get_balancing_factor(root->right)>0){
    return rightleft(root);
}



 return root;



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





// cout<<root->data<<endl;
get_inorder(root);
cout<<endl;
get_bf(root);
cout<<endl;
root=delete_node(root,10);
get_inorder(root);
return 1;


}