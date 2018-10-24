#include "essentials.cpp"



void delete_alt(struct node**head){

if(*head==NULL){
    return;
}
else if((*head)->next==NULL){
    return;
}
else{


struct node*current=*head;

while(current->next){
struct node*temp=current->next;
cout<<temp->data<<endl;
if(temp->next){
    current->next=temp->next;
    free(temp);
    current=current->next;
}
else{

    current->next=NULL;
    free(temp);

}



}




}




}






int main(){

struct node*head=NULL;
push_atend(&head,3);
push_atend(&head,5);
push_atend(&head,7);
push_atend(&head,14);
push_atend(&head,34);
push_atend(&head,134);
// push_atend(&head,312);
print_single_ll(head);
cout<<"\n";
delete_alt(&head);
print_single_ll(head);
return 1;



}