#include "essentials.cpp"



void move_node(struct node**head,struct node**head2){


struct node*head3=*head2;

struct node*temp=*head;

struct node*ahead=temp->next;
struct node*temp1=*head2;

if(temp1)
temp1->next=temp;
else
{
    

    temp1=temp;
    *head2=temp1;

}

temp->next=NULL;
*head=ahead;

*head2=temp;

}





int main(){
     struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
head=push_atend(head,14);
// head=push_atend(head,8);

struct node*head2=NULL;
// struct node*head3=NULL;
head2=push_atend(head2,34);
// head2=push_atend(head2,19);
// head2=push_atend(head2,13);
// head2=push_atend(head2,31);

struct node*temp3=head2;
// move_node(&head,&head2);

print_single_ll(head);


// struct node*temp=head;
// while(head){
//     move_node(&head,&head2);
//     if(head){
//     move_node(&head,&head3);}
    
// }
cout<<"\n";
move_node(&head,&head2);

print_single_ll(temp3);
cout<<"\n";
move_node(&head,&head2);
print_single_ll(temp3);
cout<<"\n";
print_single_ll(head);
return 1;

}