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


struct node* sorted_merge(struct node*head1, struct node*head2)
{
struct node*head3=NULL;
if(head1==NULL && head2==NULL){
    return NULL;
}
else if( head1 && !head2){
    return head1;


}
else if(!head1 && head2){
    return head2;
}
else{

    
    if(head1->data<=head2->data){
        head3=head1;
        head1->next=sorted_merge(head1->next,head2);
    }
    else{
        head3=head2;
        head2->next=sorted_merge(head2->next,head1);
    }


return head3;

}


}



struct node*sorted_merge1(struct node*head1, struct node*head2){
struct node*head3=NULL;
if(!head1 && !head2)
{
    return NULL;
}
else if(!head1 && head2){
    return head2;
}
else if(!head2 && head1){
    return head1;

}
else{
    
    struct node*temp1=head1;
    struct node*temp2=head2;
    // struct node*temp3=head3;

while(temp1 && temp2)
{   

    if(temp1->data<=temp2->data){
    head3=push_atend(head3,temp1->data);
    temp1=temp1->next;

    }
    else{
        head3=push_atend(head3,temp2->data);
        temp2=temp2->next;
    }

    
}
while(temp1){
    head3=push_atend(head3,temp1->data);
    temp1=temp1->next;
}
while(temp2){
    head3=push_atend(head3,temp2->data);
    temp2=temp2->next;
}
return head3;




}


}






int main(){
    struct node*head=NULL;
head=push_atend(head,5);
head=push_atend(head,10);
head=push_atend(head,15);
head=push_atend(head,40);
struct node*head1=NULL;

head1=push_atend(head1,2);
head1=push_atend(head1,3);
head1=push_atend(head1,20);
print_single_ll(head);
cout<<"\n";
print_single_ll(head1);
cout<<"\n";
// reverse_ll(&head);
struct node*finalhead=NULL;
finalhead=sorted_merge1(head,head1);
cout<<"\n";
// print_single_ll(finalhead);
reverse_ll(&finalhead);
print_single_ll(finalhead);

}