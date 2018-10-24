#include "essentials.cpp"


void rearrange_odd_even(struct node**head){
struct node*prev=*head;
struct node*temp=prev->next;
struct node*head1=NULL;
struct node*temp1=head1;
if(*head==NULL){
    return;
}
else{



while(prev && temp){

if(temp->next){
prev->next=temp->next;
        
        if(temp1==NULL){
            temp1=temp;
            head1=temp1;
            temp1->next=NULL;
            prev=prev->next;
            temp=prev->next;
            
            }


        else{
            
            temp1->next=temp;
            temp1=temp1->next;
            temp1->next=NULL;
            
            prev=prev->next;
            temp=prev->next;
            

        }



}
else{
    prev->next=NULL;
    temp1->next=temp;
            temp1=temp1->next;
            temp1->next=NULL;
            prev=NULL;
            temp=NULL;

}

}


}


print_single_ll(head1);
struct node*temp3=*head;
while(temp3->next){
    temp3=temp3->next;
}
temp3->next=head1;

return;

}



void rearrange_ll(struct node**head){

if(*head==NULL || (*head)->next==NULL || (*head)->next->next==NULL){
    return;
}

else{

struct node*temp=(*head);
struct node*temp1=temp->next;

struct node*head3=NULL;
struct node*temp3;


while(temp && temp1){
    if(temp1->next){
temp->next=temp1->next;
if(head3==NULL){

head3=temp1;
temp3=head3;
temp3->next=NULL;
temp=temp->next;
temp1=temp->next;


}
else{
temp3->next=temp1;
temp3=temp3->next;
temp3->next=NULL;
temp=temp->next;
temp1=temp->next;



}
    }
    else{

temp3->next=temp1;
temp->next=NULL;
temp3=temp3->next;
temp3->next=NULL;
temp=NULL;
temp1=NULL;



    }








}

struct node*temp4=(*head);
while(temp4->next){
    temp4=temp4->next;

}
temp4->next=head3;






}








}







int main(){


struct node*head=NULL;
head=push_atend(head,10);
head=push_atend(head,22);
head=push_atend(head,30);
head=push_atend(head,43);
head=push_atend(head,56);
head=push_atend(head,70);
// head=push_atend(head,23);
print_single_ll(head);
cout<<"\n";

rearrange_ll(&head);
cout<<"\n";
print_single_ll(head);
return 1;




}