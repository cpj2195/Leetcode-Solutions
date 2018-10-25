#include "essentials.cpp"


void left_view(struct bnode*root){

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
    
    temp=q.front();
    q.pop();
    
    
    if(i==1){
        cout<<temp->data<<" ";

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
    
    left_view(root);
    


    return 1;
 
}