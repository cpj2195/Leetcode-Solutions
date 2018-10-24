#include "essentials.cpp"





void pairwise_swap(struct node**head)
{

struct node*prev=*head;
struct node*next;
struct node*temp=prev->next;
while(temp!=NULL){
    
    // next=temp->next;
    swap(&prev->data,&temp->data);
    cout<<prev->data<<" "<<temp->data<<endl;
    if(temp->next)
    {prev=temp->next;}
    else
    {
prev=NULL;
return;
    }
    if(temp->next->next){
temp=temp->next->next;
    }
    else{
        return;
    }
    cout<<prev->data<<" "<<temp->data<<endl;
}


// prev=NULL;
// temp=NULL;

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
pairwise_swap(&head);
print_single_ll(head);
return 1;



}