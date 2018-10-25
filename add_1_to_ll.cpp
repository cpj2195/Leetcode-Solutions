#include "essentials.cpp"




void reverse_ll(struct node**head){
    struct node*current=*head;
    struct node*next=NULL;
    struct node*prev=NULL;
    while(current){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}


void add_1(struct node**head){



reverse_ll(*&head);
struct node*temp=*head;

int number;
int carry=0;
 int one=1;
while(temp){

number=temp->data+carry+one;

if(number>=10){
    temp->data=number%10;
    carry=1;
    one=0;
}
else{
    temp->data=number;
    carry=0;
}
temp=temp->next;

}

reverse_ll(*&head);


}












int main(){
    struct node*head=NULL;
    head=push_atend(head,1);
    head=push_atend(head,9);
    head=push_atend(head,9);
    head=push_atend(head,9);
    head=push_atend(head,9);       
    print_single_ll(head);    
    add_1(&head);    
    print_single_ll(head);
    return 1;
}