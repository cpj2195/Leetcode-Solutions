#include "essentials.cpp"


void reverse_ll(struct node**head){



struct node*current=*head;
struct node*prev=NULL;
struct node*next;

while(current!=NULL){

next=current->next;
current->next=prev;
prev=current;
current=next;



}
*head=prev;
return;



}









int main(){
struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
head=push_atend(head,14);
head=push_atend(head,34);
head=push_atend(head,312);
print_single_ll(head);
cout<<"\n";
reverse_ll(&head);
print_single_ll(head);
return 1;

}