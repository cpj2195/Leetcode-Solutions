#include "essentials.cpp"


void move_node(struct node**head,struct node**head2){


struct node*temp=*head;

    
struct node*ahead=temp->next;

temp->next=*head2;
*head2=temp;
*head=ahead;

}




int main(){
    struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
head=push_atend(head,14);
// head=push_atend(head,8);

struct node*head2=NULL;
struct node*head3=NULL;
// head2=push_atend(head2,34);
// head2=push_atend(head2,19);
// head2=push_atend(head2,13);
// head2=push_atend(head2,31);


// move_node(&head,&head2);

print_single_ll(head);


// struct node*temp=head;
while(head){
    move_node(&head,&head2);
    if(head){
    move_node(&head,&head3);}
    
}
cout<<"\n";
print_single_ll(head2);
cout<<"\n";
print_single_ll(head3);
return 1;
}