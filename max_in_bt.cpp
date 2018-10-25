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

void get_maximum_element(struct btnode*root){

if(root==NULL){
    return;
}
else{

queue<struct btnode*>q;
q.push(root);

struct btnode*temp=root;
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




get_maximum_element(root);

return 1;




}