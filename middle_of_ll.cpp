#include "essentials.cpp"




void get_middle(struct node**head){

struct node*slow=*head;
struct node*fast=*head;

    
while(slow && fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
}


cout<<slow->data<<endl;



}



int main(){

struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
head=push_atend(head,14);
head=push_atend(head,34);
head=push_atend(head,312);
head=push_atend(head,31);
head=push_atend(head,3);
head=push_atend(head,1);
head=push_atend(head,2);
head=push_atend(head,12);
head=push_atend(head,89);
head=push_atend(head,39);
print_single_ll(head);
cout<<"\n";



get_middle(&head);
return 1;



}