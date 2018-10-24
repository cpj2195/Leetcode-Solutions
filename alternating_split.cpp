#include "essentials.cpp"

void move_node1(struct node**head,struct node**head2){


struct node*temp=*head;

struct node*ahead=temp->next;
temp->next=*head2;
*head2=temp;
*head=ahead;



}



void alternating_split(struct node**head,struct node**head1,struct node**head2){

while(*head){
    move_node1(*&head,*&head1);
    if(*head){
        move_node1(*&head,*&head2);
    }
}
    
}












int main(){


struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
head=push_atend(head,14);
head=push_atend(head,34);
// head=push_atend(head,312);



print_single_ll(head);
cout<<"\n";
struct node*head1=NULL;
struct node*head2=NULL;
alternating_split(&head,&head1,&head2);

    
print_single_ll(head1);
cout<<"\n";
print_single_ll(head2);
return 1;




}