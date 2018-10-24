#include "essentials.cpp"


struct node* reverse_k_groups(struct node*head,int k){


struct node*next=NULL;
struct node*current=head;
struct node*prev=NULL;
int count=0;
while(current!=NULL && count<k){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    count++;



}
// cout<<prev->data<<"  hi ";

// cout<<next->data<<endl;
if(next){
    head->next=reverse_k_groups(next,k);
}

return prev;

}









int main(){
    struct node*head=NULL;
    head=push_atend(head,1);
    head=push_atend(head,81);
    head=push_atend(head,121);
    head=push_atend(head,15);
    head=push_atend(head,5);
    head=push_atend(head,41);
    head=push_atend(head,11);
    head=push_atend(head,71);

    print_single_ll(head);
    cout<<"\n";
    head=reverse_k_groups(head,3);
    cout<<"\n";
    print_single_ll(head);
}