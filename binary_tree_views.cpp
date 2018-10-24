#include "binary_tree_essentials.cpp"


void right_view(struct bnode*root){

if(root==NULL){
    return;
}
else{

queue<struct bnode*>q;
q.push(root);

struct bnode*temp=root;
bool flag=false;
while(!q.empty()){
int size=q.size();

for(int i=1;i<=size;i++){
    // int min=q.front()->data;
    temp=q.front();
    q.pop();
    
    cout<<temp->data<<" ";
    if(i==size){
        cout<<flag<<endl;
        flag=!flag;
    }
    
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);}
    
}



}




}



}


void right_view1(struct bnode*root){

if(root==NULL){
    return;
}
else{

queue<struct bnode*>q;
q.push(root);

struct bnode*temp=root;

while(!q.empty()){
int size=q.size();
int min=q.front()->data;
for(int i=1;i<=size;i++){
    // int min=q.front()->data;
    
    temp=q.front();
    if(min>temp->data){
        min=temp->data;
    }
    q.pop();
    
    if(i==size){
        cout<<min<<endl;
    }
    
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);}
    
}



}




}



}


void right_view2(struct bnode*root){

if(root==NULL){
    return;
}
else{

queue<struct bnode*>q;
q.push(root);

struct bnode*temp=root;
int min=q.front()->data;
while(!q.empty()){
int size=q.size();

for(int i=1;i<=size;i++){
    // int min=q.front()->data;
    
    temp=q.front();
    if(min>temp->data){
        min=temp->data;
    }
    q.pop();
    
    
    
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);}
    
}



}
cout<<min<<endl;





}



}


void zig_zag(struct bnode*root,int level)
{

bool flag=true;
if(root==NULL){
    return;
}
else if(level==1){
    cout<<root->data<<" ";
}
else if(!flag){

zig_zag(root->left,level-1);
zig_zag(root->right,level-1);
flag=!flag;

}
else if(flag){
    zig_zag(root->right,level-1);
    zig_zag(root->left,level-1);
    flag=!flag;
}






}



int half_count(struct bnode*root){

if(root==NULL){
    return 0;
}
else if((root->right && !root->left) || (!root->right && root->left)   ){
return 1;
}
else if(!root->left && !root->right){
    return 0;
}
else {
    return half_count(root->right)+half_count(root->left);
}




}




struct bnode1{
    struct bnode1*left,*right,*nextright;
    int data;

};


void connect_at_samelevel(struct bnode1*root){

if(root==NULL){
    return;
}
else{

queue<struct bnode1*>q;
q.push(root);
struct bnode1*temp=root;
while(!q.empty()){

int size=q.size();

for(int i=1;i<=size;i++){
    temp=q.front();
    q.pop();
    if(i==size){
        temp->nextright=NULL;
    }
    else{
        temp->nextright=q.front();
    }
    if(temp->left){
        q.push(temp->left);

    }
    if(temp->right){
        q.push(temp->right);
    }


}




}






}






}



struct bnode* find_lca(struct bnode*root,int n1,int n2){

if(root==NULL){
    return NULL;
}
else if(root->data==n1 || root->data==n2){
    return root;
}
else{
struct bnode*leftlca=find_lca(root->left,n1,n2);
struct bnode*rightlca=find_lca(root->right,n1,n2);

if(!leftlca && !rightlca){
    return NULL;
}
return (leftlca!=NULL?leftlca:rightlca);

}






}



void find_nextright(struct bnode*root){

if(root==NULL){
    return;
}
else{

queue<struct bnode*>q;
q.push(root);
struct bnode*temp=root;
while(!q.empty()){

int size=q.size();
for(int i=1;i<=size;i++){

    temp=q.front();
    q.pop();

if(i==size){
    cout<<"no next right element present"<<endl;
}
else{
    cout<<q.front()->data<<endl;

}
if(temp->left){
    q.push(temp->left);

}
if(temp->right){
    q.push(temp->right);
}

}


}



}


}

int get_height(struct bnode*root){

if(root==NULL){
    return 0;
}
else{
    return max(get_height(root->left),get_height(root->right)+1);
}

}

void print_level(struct bnode*root,int level,bool flag){

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

// flag=!flag;
}



else{
    print_level(root->right,level-1,flag);
    print_level(root->left,level-1,flag);
    // flag=!flag;
}


}


}


void spiral_fashion(struct bnode*root){

bool flag=true;
if(root==NULL){
    return;
}
else{

int height=get_height(root);



for(int i=0;i<=height;i++){
    // cout<<"height is  "<<height<<endl; 
    print_level(root,i,flag);
    flag=!flag;
}






}


}




int get_halfnodes(struct bnode*root){

int count=0;
if(root==NULL || (root->left ==NULL && root->right==NULL))
{
    return 0;
}


else if((!root->left && root->right) || (!root->right && root->left)){
    return 1;
}

else{

queue<struct bnode*>q;
q.push(root);

struct bnode*temp=root;


while(!q.empty()){
int size=q.size();



for(int i=1;i<=size;i++){

temp=q.front();
q.pop();
if(temp->left){
    q.push(temp->left);
}
if(temp->right){
    q.push(temp->right);
}
if((!temp->left && temp->right)|| (!temp->right && temp->left)){
    count++;
}



}




}

return count;

}


}

bool is_present(struct bnode*root,int n)
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





struct bnode*lca_in_bst(struct bnode*root,int n1,int n2){

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







struct bnode1*newnode(int data){

struct bnode1*node=(struct bnode1*)malloc(sizeof(struct bnode1));
node->left=NULL;
node->right;
node->nextright=NULL;
node->data=data;
return node;



}



int main(){
    // struct bnode* root = newNode(10);
    // root->left = newNode(2);
    // root->right = newNode(3);
    // root->left->left = newNode(7);
    // root->left->left->right=newNode(123);
    // root->left->right = newNode(8);
    // root->right->right = newNode(15);
    // root->right->left = newNode(12);
    // root->right->left->right=newNode(100);
    // root->right->right->left = newNode(14);
    // inorder(root);
    // right_view2(root);
    // zig_zag(root,3);
    // int count=half_count(root);
    // cout<<count;
    // struct bnode1*root=newNode
//      struct bnode1* root = newnode(10);
//     root->left = newnode(8);
//     root->right = newnode(2);
//     root->left->left = newnode(3);
//     root->right->right = newnode(90);2

// connect_at_samelevel(root);


// cout<<root->left->left->nextright->data<<endl;


// struct bnode *root = newNode(10);
//     root->left = newNode(2);
//     root->right = newNode(6);
//     root->right->right = newNode(5);
//     root->left->left = newNode(8);
//     root->left->right = newNode(4);
// // find_nextright(root);
// // print_level(root,2);
// spiral_fashion(root);




struct bnode *root = newNode(38);
    root->left     = newNode(30);
    root->right     = newNode(56);
    root->left->right = newNode(35);
    root->left->right->left = newNode(32);
    root->left->right->right = newNode(36);
    root->right->right = newNode(60);
    root->right->left = newNode(40);
    root->left->left=newNode(20);
    // cout<<get_halfnodes(root)<<endl;
    // spiral_fashion(root);
    // cout<<is_present(root,15);
    // struct bnode*temp=lca_in_bst(root,20,36);
    // if(temp)
    // cout<<temp->data<<endl;
    // else{
    //     cout<<"No LCA prsent"<<endl;
    // }
    right_view(root);
    


    return 1;
 
}