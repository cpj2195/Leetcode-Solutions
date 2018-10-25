#include "essentials.cpp"



struct node*add_two_numbers(struct node*head,struct node*head1){

struct node*head3=NULL;

struct node*temp=head;
struct node*temp1=head1;

int number;
int carry=0;

while(temp || temp1){



if(temp && temp1){
    number=temp->data+temp1->data+carry;
    
    if(number>=10){
        
        number=number%10;
        
        carry=1;

    }
    else{
        carry=0;
    }
    
    head3=push_atend(head3,number);
    temp=temp->next;
    temp1=temp1->next;
   
}

else if(temp && !temp1){
number=temp->data+carry;
if(number>=10){
        
        number=number%10;
        
        carry=1;

    }
    else{
        carry=0;
    }
    head3=push_atend(head3,number);
    temp=temp->next;}



else if(!temp && temp1){
    number=temp1->data+carry;
    if(number>=10){
        
        number=number%10;
        
        carry=1;

    }
    else{
        carry=0;
    }
    head3=push_atend(head3,number);
    temp1=temp1->next;}


    
}
return head3;
// print_single_ll(head3);

}

void reverse_ll(struct node**head){
    struct node*current=*head;
    struct node*next=NULL;
    struct node*prev=NULL;
    while(current){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}














int main(){
    struct node*head=NULL;
    struct node*head1=NULL;
    struct node*head3=NULL;
    head=push_atend(head,1);
    head=push_atend(head,9);
    head=push_atend(head,9);
    head=push_atend(head,9);
    head=push_atend(head,9);
    head=push_atend(head,6);
    head1=push_atend(head1,8);
    head1=push_atend(head1,4);
    print_single_ll(head);
    print_single_ll(head1);

    
    head3=add_two_numbers(head,head1);
    print_single_ll(head3);
    return 1;
}