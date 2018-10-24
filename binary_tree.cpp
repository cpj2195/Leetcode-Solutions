#include "essentials.cpp"

struct bnode{
    int data;
    struct bnode*left;
    struct bnode*right;

};

struct bnode*new_node(int data){


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

int get_height(struct bnode*root){

if(root==NULL){
    return -1;
}
else{
    return max(get_height(root->left),get_height(root->right)+1);
}

}



int get_count(struct bnode*root){
if(root==NULL){
    return 0;
}
else{
    return(get_count(root->right)+ get_count(root->left)+1);
}
}





int get_count_level(struct bnode*root,int level){


int height=get_height(root);



if(level==1){
return 1;

}
else if(level>height){
    return INT_MAX;
}
else{
    return get_count_level(root->left,level-1)+get_count_level(root->right,level-1);
    }


}




void inorder_recursion(struct bnode*root){

stack<struct bnode*>s;
if(root==NULL){
    return;

}
else{

bool flag=true;
struct bnode*current=root;
while(flag){
    if(current){
    s.push(current);
    current=current->left;
    }

if(current==NULL && !s.empty()){
    cout<<s.top()->data<<" ";
    // s.pop();
    current=s.top()->right;
    s.pop();
    }


if(current==NULL && s.empty()){
    flag=false;
    return;
}

}
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




void preorder_iterative(struct bnode*root){

if(root==NULL){
    return;
}
else{

stack<struct bnode*>s;
s.push(root);

struct bnode*current=root;
while(!s.empty()){

cout<<s.top()->data<<" ";
current=s.top();
s.pop();
if(current->right){
    s.push(current->right);
}
if(current->left){
    s.push(current->left);
}

}





}


}




void postorder_iterative(struct bnode*root){

if(root==NULL){
    return;
}
else{

stack<struct bnode*>s1;
stack<struct bnode*>s2;

s1.push(root);


while(!s1.empty()){

s2.push(s1.top());
struct bnode*temp=s1.top();
s1.pop();
if(temp->left){
    s1.push(temp->left);
}
if(temp->right){
    s1.push(temp->right);
}


}
cout<<"hi"<<endl;
cout<<s2.size()<<endl;



while(!s2.empty()){
    cout<<s2.top()->data<<" ";
    s2.pop();

}


}

}

void reverse_level_order(struct bnode*root){

queue<struct bnode*>q;
struct bnode*temp=root;
cout<<temp->data<<" ";
while(temp){
// cout<<"hsi"<<endl;

if(temp->right){
    q.push(temp->right);
}
if(temp->left){
    q.push(temp->left);
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


void postorder(struct bnode*root){



    if(root==NULL){
    return;
}
else{

postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";

}

}


void diagonal_traversal(struct bnode*root){

if(root==NULL){
    return;
}
else{


queue<struct bnode*>q;
struct bnode*temp=root;
while(temp){
    q.push(temp);
    temp=temp->right;
}

while(!q.empty()){
    struct bnode*temp1=q.front();

if(temp1->left){
    temp1=q.front()->left;

while(temp1){
    q.push(temp1);
    temp1=temp1->right;
}
}
cout<<q.front()->data<<" ";
q.pop();

}

}
}


int binary_search(int array[], int low, int high, int x){

if(low>high){
    return -1;
}
else{

int mid=low+ (high-low)/2;

if(array[mid]==x){
    return mid;
}
else if(x<array[mid]){
    return binary_search(array,low,mid-1,x);
}

else if(x>array[mid]){
    return binary_search(array,mid+1,high,x);
}

}





}

struct bnode*build_tree( int preorder[], int inorder[], int instrt, int inend){

static int preindex=0;

struct bnode*temp=new_node(preorder[preindex++]);
if(instrt>inend){
    return NULL;
}

else if(instrt==inend){
    return temp;
}
else{
int index=binary_search(inorder,instrt,inend,temp->data);
temp->left=build_tree(preorder,inorder,instrt,index-1);
temp->right=build_tree(preorder,inorder,index+1,inend);


}
}


























int main(){

    struct bnode*root=NULL;
    root=new_node(8);
    root->left=new_node(3);
    root->left->left=new_node(1);
    // root->left->right=new_node(5);
    root->right=new_node(10);
    root->right->left=new_node(6);
    root->right->right=new_node(14);
    root->right->right->left=new_node(13);
    root->right->left->left=new_node(4);
    root->right->left->right=new_node(7);

// preorder_iterative(root); 
// cout<<endl;
// inorder(root);
// diagonal_traversal(root);
int inorder1[]={8,3,1,10,6,4,7,14,13};
int index=binary_search(inorder1,0,8,4);
cout<<index<<endl;
int preorder[]={1,3,8,4,6,7,10,13,14};
cout<<endl;
// struct bnode*root1=build_tree(preorder,inorder1,0,7);

// inorder(root1);
    
    // reverse_level_order(root);
    return 1;






}





