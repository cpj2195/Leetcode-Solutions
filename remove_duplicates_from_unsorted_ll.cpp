#include "essentials.cpp"
void delete_node(struct node**head,int key){

struct node*temp=*head;
struct node*prev;

if(temp->data==key){
    struct node*hi=*head;
    if(hi->next){
        *head=hi->next;
    }
    free(hi);
}
else{
    while(temp->data!=key){

prev=temp;
temp=temp->next;
    }

if(temp->next){
    struct node*next1=temp->next;
    prev->next=next1;
    free(temp);
    temp=NULL;
    temp=next1->next;

}else{

    free(temp);
    prev->next=NULL;
}


}


}

void remove_duplicates_ll(struct node**head){

if(*head==NULL){
    return;
}



struct node*temp=*head;


while(temp){
    struct node*temp1=temp->next;
while(temp1){

if(temp->data!=temp1->data){
    if(temp1->next){
        temp1=temp1->next;
    }
    else{
        break;
    }
    

}

else{

cout<<temp1->data<<endl;
if(temp1->next){
    struct node*next1=temp1->next;
    delete_node(*&head,temp1->data);
temp1=next1;

    }
    else{
        delete_node(*&head,temp1->data);
    }


}


}

temp=temp->next;

}




}


void remove_duplicates_sorted(struct node**head){



if((*head)==NULL){
    return;
}
else if((*head)->next == NULL){
    return;
}


struct node*temp=*head;
struct node*temp1=temp->next;

while(temp->next && temp1){

if(temp->data==temp1->data){
if(temp1->next){
temp->next=temp1->next;
temp1=temp->next;
}
else{
temp->next=NULL;
free(temp1);
temp1=NULL;

}
}
else{

temp=temp->next;
temp1=temp1->next;


}

}


}








int main(){
    struct node*head=NULL;
head=push_atend(head,1);
head=push_atend(head,1);
head=push_atend(head,3);
head=push_atend(head,4);
head=push_atend(head,4);
head=push_atend(head,4);
head=push_atend(head,5);
head=push_atend(head,5);
print_single_ll(head);
cout<<"\n";
// remove_duplicates_ll(&head);
remove_duplicates_sorted(&head);
// delete_node(&head,34);
print_single_ll(head);
return 1;
}