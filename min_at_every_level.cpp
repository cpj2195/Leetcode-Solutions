#include"essentials.cpp"

void get_min_at_each_level(struct bnode*root){

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


    get_min_at_each_level(root);
    return 1;



}