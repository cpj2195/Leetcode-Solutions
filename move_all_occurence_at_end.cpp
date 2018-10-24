#include "essentials.cpp"
  

void append_atend(struct node**head,int key){

// struct node*temp=*head;
if(*head==NULL){
    return;
}

struct node*head1=NULL;
struct node*temp1;
struct node*temp=*head;
struct node*prev;
while(temp->next!=NULL){

if(temp->data==key){
    if(temp->next){
        prev->next=temp->next;
    }else{
        prev->next=NULL;
    }
    if(head1==NULL)
    {head1=temp;
    temp1=temp;
    temp1->next=NULL;

    }
    else{
        temp1->next=temp;
        temp1=temp1->next;
        temp1->next=NULL;

    }
    temp=prev->next;

}

else{
    prev=temp;
    temp=temp->next;
}


}
print_single_ll(*head);
cout<<"\n";
print_single_ll(head1);
temp->next=head1;
temp1->next=NULL;
cout<<"\n";
print_single_ll(*head);
}


void delete_node(struct node*ptr){


    if(ptr==NULL){
        return;
    }
    else{
        if(ptr->next){
            struct node*temp=ptr->next;
            ptr->data=temp->data;
            ptr->next=temp->next;
            free(temp);
        }
        else{
            ptr=NULL;
            free(ptr);
            return;
        }
    }

}










int main(){



    struct node*head=NULL;
    head=push_atend(head,1);
    head=push_atend(head,2);
    head=push_atend(head,5);
    head=push_atend(head,4);
    head=push_atend(head,3);
// append_atend(&head,2);
struct node*hello=head;
while(hello->next->next!=NULL){
    hello=hello->next;
}
cout<<hello->data<<endl;
delete_node(hello);
print_single_ll(head);
    return 1;
}
