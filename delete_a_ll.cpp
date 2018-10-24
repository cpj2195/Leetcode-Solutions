#include "essentials.cpp"


void delete_ll(struct node**head){

struct node*current=*head;
struct node*prev;



while(current!=NULL){
    cout<<current->data<<endl;
    prev=current;
    
    current=current->next;
    // if(prev->next)
    free(prev);
    

}

*head=NULL;


}






int main(){

struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
head=push_atend(head,14);
// head=push_atend(head,34);
// head=push_atend(head,312);
print_single_ll(head);
cout<<"\n";
delete_ll(&head);
print_single_ll(head);
return 1;





}