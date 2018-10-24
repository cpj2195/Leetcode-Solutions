#include "essentials.cpp"


struct node* push_infront(struct node*head,int data){

struct node*temp=new node;

temp->data=data;
temp->next=head;
head=temp;
return head;
}


// struct node* push_atend(struct node*head,int data){

// struct node*temp=(struct node*)malloc(sizeof(struct node));
// struct node*temp1=head;

// temp->data=data;
// if(head==NULL){
//     head=temp;
//     temp->next=NULL;
//     return head;
// }
// else{

//     while(temp1->next!=NULL){
//         temp1=temp1->next;
//     }

// temp1->next=temp;
// temp->next=NULL;

// return head;


// }

// }

void push_after(struct node*head,int after_what,int data){

struct node*newnode=(struct node*)malloc(sizeof(struct node));
struct node*temp=head;

while(temp->data!=after_what){
    temp=temp->next;
}

newnode->data=data;
newnode->next=temp->next;
temp->next=newnode;


}


void delete_node(struct node**head,int key){

struct node*temp=*head;

if(*head==NULL){
    return;

}
if(temp->data==key){
    *head=temp->next;
    free(temp);
    return;
}





while(temp->next->data!=key){
    temp=temp->next;
cout<<"hey there"<<endl;
}
struct node*hi=temp->next;
temp->next=hi->next;
free(hi);


}












int main(){

struct node*head=NULL;



// head=push_infront(head,5);
// head=push_infront(head,4);
// head=push_infront(head,3);
// head=push_infront(head,2);
// head=push_infront(head,1);

head=push_atend(head,1);
head=push_atend(head,5);
head=push_atend(head,10);
head=push_atend(head,111);
head=push_atend(head,123);
push_after(head,10,18);
print_single_ll(head);
delete_node(&head,18);
delete_node(&head,1);
print_single_ll(head);

return 1;


}