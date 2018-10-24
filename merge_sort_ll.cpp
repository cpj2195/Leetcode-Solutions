#include "essentials.cpp"



struct node* front_back_split(struct node**head){

struct node*head1;
struct node*slow=*head;
struct node*fast=slow->next;

if(*head==NULL){
    return NULL;
}
else if(slow->next==NULL){
    return *head;
}
else{

while(slow && fast && fast->next){
    // cout<<"before  "<<slow->data<<" "<<fast->data<<endl;  
    slow=slow->next;
    fast=fast->next->next;
    // cout<<slow->data<<" "<<fast->data<<endl;  
}}
// cout<<slow->data;
head1=slow->next;
slow->next=NULL;


return head1;

}


struct node* sorted_merge(struct node*head1, struct node*head2)
{

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

    struct node*head3=NULL;
    struct node*temp1=head1;
    struct node*temp2=head2;
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


void merge_sort_ll(struct node**head){

struct node*temp=*head;
struct node*head1=NULL;
if(temp==NULL || temp->next==NULL){
    return;

}
else{
    head1=front_back_split(&*head);
    merge_sort_ll(&*head);
    merge_sort_ll(&head1);
    *head=sorted_merge(*head,head1);


}


}








int main(){
    struct node*head=NULL;
    
    head=push_atend(head,1);
    head=push_atend(head,91);
    head=push_atend(head,92);
    head=push_atend(head,12);
    head=push_atend(head,34);
    head=push_atend(head,23);
    head=push_atend(head,11);
    head=push_atend(head,20);
    head=push_atend(head,20);
    
    struct node*head1=NULL;
    
    print_single_ll(head);
    cout<<"\n" ;
    // head1=front_back_split(&head);
    // cout<<"\n";
    merge_sort_ll(&head);
    // print_single_ll(head);
    // cout<<"\n" ;
    print_single_ll(head);
    cout<<"\n" ;

    return 1;
}