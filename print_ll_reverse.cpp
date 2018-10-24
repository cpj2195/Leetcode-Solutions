#include "essentials.cpp"


void print_reverse(struct node*head){



    struct node*temp=head;
    if(head==NULL){
        return;
    }
    else{
        print_reverse(temp->next);
        cout<<temp->data<<"  ";
    }
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
print_reverse(head);
cout<<"\n";
// print_single_ll(head);
return 1;





}