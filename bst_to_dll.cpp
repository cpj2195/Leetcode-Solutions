#include"essentials.cpp"

struct Bnode{
    int data;
    struct Bnode*right,*left;

};

struct dl_node{
    struct dl_node*next,*prev;
    int data;
};


struct Bnode*NewNode(int data){

struct Bnode*node=(struct Bnode*)malloc(sizeof(struct Bnode));
node->left=NULL;
node->right=NULL;
node->data=data;
return node;

}




void inorder(struct Bnode*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}



void insert_double_ll(struct dl_node**head, int data){

if(*head==NULL){

struct dl_node*temp=(struct dl_node*)malloc(sizeof(struct dl_node));
temp->data=data;
*head=temp;
temp->next=temp;
temp->prev=temp;
}

else{
struct dl_node*temp=*head;
while(temp->next!=*head){
    temp=temp->next;
}
struct dl_node*node=(struct dl_node*)malloc(sizeof(struct dl_node));
struct dl_node*temp1=*head;

temp->next=node;
node->prev=temp;
node->next=*head;
temp1->prev=node;
node->data=data;
}

}






void print_dll(struct Bnode*head){
    struct Bnode*temp=head;
if(temp==NULL){
    return;
}
else{
    struct Bnode*temp=head;
    while(temp->right!=head){
        cout<<temp->data<<" ";
        temp=temp->right;
    }

cout<<temp->data<<endl;
}

}


// void bst_to_circular_dll(struct Bnode*root,struct dl_node**head){

// if(root==NULL){
//     return;
// }
// bst_to_circular_dll(root->left,*&head);


// insert_double_ll(&*head,root->data);

// bst_to_circular_dll(root->right,*&head);

// }



void bst_2_dll(struct Bnode*root,struct Bnode**head){


if(root==NULL){
    return;
}

else{

static Bnode*prev=NULL;

bst_2_dll(root->left,head);

if(prev==NULL){
    *head=root;
}
else{

root->left=prev;
prev->right=root;



}
prev=root;

bst_2_dll(root->right,head);

}






}



void dll_2_circular(struct Bnode**head){
if(*head==NULL){
    return;
}

else{

struct Bnode*temp=*head;
while(temp->right!=NULL){
    temp=temp->right;
}
// cout<<temp->data;
cout<<endl;
temp->right=*head;
struct Bnode*first=*head;
first->left=temp;
// cout<<first->data<<" "<<first->left->data<<" "<<temp->data<<" "<<temp->right->data<<endl;

}

}


int main(){
struct Bnode *root = NewNode(38);
    root->left     = NewNode(30);
    root->right     = NewNode(56);
    root->left->right = NewNode(35);
    root->left->right->left = NewNode(32);
    root->left->right->right = NewNode(36);
    root->right->right = NewNode(60);
    root->right->left = NewNode(40);
    root->left->left=NewNode(20);
    struct Bnode*head=NULL;

    bst_2_dll(root,&head);
    
    dll_2_circular(&head);
print_dll(head);


    return 1;




}