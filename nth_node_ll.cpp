#include "essentials.cpp"




void get_nth(struct node**head,int n){

struct node*current=*head;


    for(int i=0;i<n-1;i++){
            current=current->next;
    }

cout<<current->data<<endl;






}



int main(){

struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
head=push_atend(head,14);
head=push_atend(head,34);
head=push_atend(head,312);
print_single_ll(head);
cout<<"\n";



get_nth(&head,3);
return 1;



}