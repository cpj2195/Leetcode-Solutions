#include "essentials.cpp"







void reverse_ll(struct node**head){




if(*head==NULL){
    return;
}
struct node*temp1=*head;
struct node*temp2=NULL;
if(temp1->next){
    temp2=temp1->next;
}

if(temp2==NULL){
    return;
}


reverse_ll(&temp2);
temp1->next->next=temp1;
temp1->next=NULL;
*head=temp2;



}

















int main(){

struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
head=push_atend(head,14);

print_single_ll(head);
cout<<"\n";
reverse_ll(&head);
print_single_ll(head);
return 1;





}