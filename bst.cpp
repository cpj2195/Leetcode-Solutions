#include "essentials.cpp"




struct bnode{
    int data;
    struct bnode*right,*left;

};

void inorder(struct bnode*root){

if(root==NULL){
    return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}




struct bnode*newNode(int data){

struct bnode*node=(struct bnode*)malloc(sizeof(struct bnode*));
node->right=NULL;
node->left=NULL;
node->data=data;
return node;



}




struct bnode*insert(struct bnode*root,int data){

if(root==NULL){
    return newNode(data);
}
else if( data<root->data){
    root->left=insert(root->left,data);
}
else if(data>root->data){
    root->right=insert(root->right,data);
}
else{
    return root;
}

}


bool search(struct bnode*root,int data){

if(root==NULL){
    return false;
}
else if(root->data==data){
    return true;
}
else if(data<root->data){
    return search(root->left,data);
}
else{
    return search(root->right,data);

}


}



struct bnode*min_node(struct bnode*root){

if(root==NULL){
    return NULL;
}
else{
    struct bnode*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}





}


struct bnode*delete_node(struct bnode*root, int data){

if(root==NULL){
    return NULL;
}

else if(data<root->data){
    root->left=delete_node(root->left,data);
}
else if(data>root->data){
    root->right= delete_node(root->right,data);
}

if(!root->left && !root->right && root->data==data){
    delete(root);
    return NULL;
    }

if(!root->left && root->right){
    struct bnode*temp=root->right;
    delete(root);
    return temp;
}

else if(root->left && !root->right){
    struct bnode*temp=root->left;
    delete(root);
    return temp;
}


 else if(root->left && root->left){

struct bnode*temp=min_node(root->right);
root->data=temp->data;
root->right=delete_node(root->right,temp->data);
}
else {
    return root;
}



}



struct bnode*construct_from_inorder(int inorder[], int low, int high){




if(low>high){
    return NULL;
}

int mid=low+(high-low)/2;

struct bnode*root=newNode(inorder[mid]);

root->left=construct_from_inorder(inorder,low,mid-1);
root->right=construct_from_inorder(inorder,mid+1,high);

return root;




}


void level_order(struct bnode*root){

queue<struct bnode*>q;
struct bnode*temp=root;
cout<<temp->data<<" ";
while(temp){
// cout<<"hsi"<<endl;
if(temp->left){
    q.push(temp->left);
}
if(temp->right){
    q.push(temp->right);
}
if(!q.empty()){
cout<<q.front()->data<<" ";
temp=q.front();
q.pop();}
else{
    return;
}


}

}



bool check_for_bst(struct bnode*root,int min, int max){



if(root==NULL){
    return true;
}

else if(root->data<min || root->data>max){
    return false;
}
else {
    return(check_for_bst(root->left,min,root->data) && check_for_bst(root->right,root->data,max));
}

}


void store_inorder(struct bnode*root,int array[70],int *i){

if(root==NULL){
    return;
}


store_inorder(root->left,array,i);

array[*i]=root->data;
(*i)++;


store_inorder(root->right,array,i);




}






int find_kth_smallest(struct bnode*root, int k){


int i=0;
int *array=new int[70];
store_inorder(root,array,&i);
cout<<"hi"<<endl;
// print_array(array,7);

// cout<<array[k-1]<<endl;

return array[k-1];






}























int main(){

struct bnode*root=newNode(50);
insert(root,30);
insert(root,20);
insert(root,40);
insert(root,70);
insert(root,60);
insert(root,80);
// inorder(root);
// root=delete_node(root,50);
// int preorder[]={};
// int high=sizeof(preorder)/sizeof(preorder[0])-1;
// int low=0;
// sort(preorder,preorder+high);
// struct bnode*root1=construct_from_preorder(preorder,low,high);



inorder(root);

cout<<endl;
// level_order(root1);

// cout<<check_for_bst(root,INT_MIN,INT_MAX)<<endl;
// inorder(root);
// int i=0;
// int *array=new int[100];
// store_inorder(root,array,&i);
cout<<find_kth_smallest(root,3)<<endl;



// inorder(root);
return 1;



}
