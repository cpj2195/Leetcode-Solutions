#include "essentials.cpp"

void separate_even_odd(struct node**head)
{

struct node*head1=NULL;
struct node*temp1=head1;
struct node*temp=*head;
struct node*prev;
while(temp!=NULL){

if(temp->data%2==0){

    prev=temp;
    temp=temp->next;
}
else{
     
    if(head1==NULL && prev==NULL ){
        temp1=temp;
        // *head=temp;
        if(temp->next){
            temp=temp->next;
        }
        *head=temp;
        head1=temp1;
        temp1->next=NULL;

    }
    else if(head1==NULL && prev!=NULL){

        temp1=temp;
        // *head=temp;
        if(temp->next){
            prev->next=temp->next;
            temp=prev->next;
        }
        
        head1=temp1;
        temp1->next=NULL;



    }
    else{
        temp1->next=temp;
        if(temp->next){
            prev->next=temp->next;
            temp1=temp;
            temp=prev->next;
            temp1->next=NULL;

        }
        else{
            prev->next=NULL;
            temp1=temp;
            temp=NULL;
            temp1->next=NULL;
        }
    }




    }

}
// temp->next=head1;
prev->next=head1;
print_single_ll(*head);
cout<<" \n";
print_single_ll(head1);



}












int main(){
     struct node*head=NULL;
    head=push_atend(head,1);
    head=push_atend(head,81);
    head=push_atend(head,121);
    // head=push_atend(head,15);
    // head=push_atend(head,5);
    head=push_atend(head,41);
    // head=push_atend(head,1);
    // head=push_atend(head,7);

    print_single_ll(head);
    cout<<"\n";
    separate_even_odd(&head);
    cout<<"\n";
    print_single_ll(head);


    return 1;
}