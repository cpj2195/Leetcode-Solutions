#include"essentials.cpp"



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



// #####################################################################################################

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


// #############################################################################################################



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


void get_lca_bst(struct bnode*root,int n1,int n2){


    struct bnode*temp=lca_in_bst(root,n1,n2);

    if(temp){
        cout<<temp->data<<endl;
        }
    else{
        cout<<"No Least Common Ancestor Available"<<endl;
    }


}





// ######################################################################################################




int get_height(struct bnode*root){

if(root==NULL){
    return 0;
}
else{
    return max(get_height(root->left),get_height(root->right)+1);
}

}



int get_diameter(struct bnode*root){

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


// ###################################################################################################################################



int get_height1(struct bnode*root){

if(root==NULL){
    return -1;
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

}



else{
    print_level(root->right,level-1,flag);
    print_level(root->left,level-1,flag);
    
}


}


}


void zigzag_fashion(struct bnode*root){

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



// ###################################################################################################################################




void get_maximum_element(struct bnode*root){

if(root==NULL){
    return;
}
else{

queue<struct bnode*>q;
q.push(root);

struct bnode*temp=root;
int max=q.front()->data;
while(!q.empty()){
int size=q.size();

for(int i=1;i<=size;i++){
   
    temp=q.front();
    if(temp->data>max){
        max=temp->data;
    }
    q.pop();
    
    
    
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);}
    
}



}
cout<<max<<endl;

}



}
// #############################################################################################################





int main(){


struct bnode *root = newNode(38);
    root->left     = newNode(30);
    root->right     = newNode(56);
    root->left->right = newNode(35);
    root->left->right->left = newNode(32);
    root->left->right->right = newNode(36);
    root->right->right = newNode(60);
    root->right->left = newNode(40);
    root->left->left=newNode(20);


get_maximum_element(root);
cout<<endl;
get_lca_bst(root,56,60);
cout<<endl;
cout<<get_halfnodes(root)<<endl;
cout<<get_diameter(root)<<endl;


zigzag_fashion(root);

return 1;



}