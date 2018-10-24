#include "essentials.cpp"





void reverse_ll(struct node**head){
    struct node*temp=*head;
    struct node*prev=NULL;
    struct node*current=*head;
    struct node*next=NULL;
    while(current){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    *head=prev;

}

void rearrange_ll(struct node**head){
struct node*temp=*head;
    if(*head==NULL || temp->next==NULL){
        return;
    }
    struct node*slow=*head;
    struct node*fast=slow->next;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct node*head1=slow->next;
    slow->next=NULL;
    reverse_ll(&head1);
    // print_single_ll(*head);
    // print_single_ll(head1);

while(temp && head1){
    struct node*next=temp->next;
    temp->next=head1;
    head1=head1->next;
    temp->next->next=next;
    temp=temp->next->next;
    


}
print_single_ll(*head);



}





int main(){
    struct node*head=NULL;
    head=push_atend(head,1);
    head=push_atend(head,2);
    head=push_atend(head,3);
    head=push_atend(head,4);
    head=push_atend(head,5);
    // head=push_atend(head,6);
    // head=push_atend(head,7);
    // head=push_atend(head,8);
    // head=push_atend(head,9);

    print_single_ll(head);

    rearrange_ll(&head);
    return 1;
}