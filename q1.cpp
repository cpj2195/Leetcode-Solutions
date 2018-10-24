#include"essentials.cpp"

struct bnode{
    int data;
    struct bnode*right,*left;

};

struct dl_node{
    struct dl_node*next,*prev;
    int data;
};


struct bnode*newNode(int data){

struct bnode*node=(struct bnode*)malloc(sizeof(struct bnode));
node->left=NULL;
node->right=NULL;
node->data=data;
return node;

}




void inorder(struct bnode*root){
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


// void print_dll(struct dl_node*head){
//     struct dl_node*temp=head;
// if(temp==NULL){
//     return;
// }
// else{
//     struct dl_node*temp=head;
//     while(temp->next!=head){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

// cout<<temp->data<<endl;
// }

// }




void print_dll(struct bnode*head){
    struct bnode*temp=head;
if(temp==NULL){
    return;
}
else{
    struct bnode*temp=head;
    while(temp->right!=head){
        cout<<temp->data<<" ";
        temp=temp->right;
    }

cout<<temp->data<<endl;
}

}


// void bst_to_circular_dll(struct bnode*root,struct dl_node**head){

// if(root==NULL){
//     return;
// }
// bst_to_circular_dll(root->left,*&head);


// insert_double_ll(&*head,root->data);

// bst_to_circular_dll(root->right,*&head);

// }



void bst_2_dll(struct bnode*root,struct bnode**head){


if(root==NULL){
    return;
}

else{

static bnode*prev=NULL;

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



void dll_2_circular(struct bnode**head){
if(*head==NULL){
    return;
}

else{

struct bnode*temp=*head;
while(temp->right!=NULL){
    temp=temp->right;
}
// cout<<temp->data;
cout<<endl;
temp->right=*head;
struct bnode*first=*head;
first->left=temp;
// cout<<first->data<<" "<<first->left->data<<" "<<temp->data<<" "<<temp->right->data<<endl;

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
    struct bnode*head=NULL;

    bst_2_dll(root,&head);
    
    dll_2_circular(&head);
print_dll(head);


    return 1;




}