#include "essentials.cpp"




void reverse_ll(struct node**head){
    if(*head==NULL){
        return;

    }
    else{

struct node*current=*head;
struct node*next=NULL;
struct node*prev=NULL;
while(current){
next =current->next;
current->next=prev;
prev=current;
current=next;

}
*head=prev;


 }
}
struct node* listsplit(struct node**head){
if(*head==NULL){
    return NULL;

}
else{


struct node*slow=*head;
struct node*fast=slow->next;
while(slow && fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
}
struct node*head2=NULL;
head2=slow->next;
slow->next=NULL;

reverse_ll(&head2);
return head2;

}

}


void interleave(struct node**head,struct node*head2){

if((*head==NULL) || (head2)==NULL ){
    return;
}
else if((*head)==NULL && (head2)!=NULL)
{
head2=(*head);



}
else if((*head) && (head2)==NULL){
    return;
}

else{

struct node*temp2=head2;
struct node*temp1=(*head);
struct node*prev;
while(temp2){

prev=temp2;
temp2=temp2->next;
if(temp1->next){


    prev->next=temp1->next;
    temp1->next=prev;
    temp1=temp1->next->next;

}
else{

temp1->next=prev;
prev->next=NULL;
temp1=NULL;


}
}



return;

}


}






int main(){

struct node*head=NULL;
head=push_atend(head,1);
head=push_atend(head,2);
head=push_atend(head,3);
head=push_atend(head,4);
head=push_atend(head,5);
head=push_atend(head,6);
head=push_atend(head,7);
// head=push_atend(head,8);
print_single_ll(head);
cout<<endl;
struct node*head2=NULL;

head2=listsplit(&head);
// print_single_ll(head);
// cout<<endl;
// print_single_ll(head2);
// cout<<endl;
interleave(&head,head2);
print_single_ll(head);
// cout<<endl;
return 1;




}