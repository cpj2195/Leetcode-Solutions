#include "essentials.cpp"


void intersection_ll(struct node**head,struct node**head2,struct node**head3){

struct node*temp=*head;
struct node*temp1=*head2;


if(*head==NULL || *head2==NULL){
    return;
}
while(temp && temp1){

if(temp->data<temp1->data){
    if(temp->next){
        temp=temp->next;

    }else{
        break;
    }
    
}
else if(temp->data>temp1->data){
    if(temp1->next){
        temp1=temp1->next;

    }
    else{
        break;
    }
    
}
else{
    *head3=push_atend(*head3,temp->data);
    if(temp->next && temp1->next){
        temp=temp->next;
        temp1=temp1->next;
        
    }
    else{
        break;
    }
   
}


}

return;


}





int main(){


struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,6);
head=push_atend(head,7);
head=push_atend(head,14);
head=push_atend(head,22);
head=push_atend(head,29);
head=push_atend(head,30);

print_single_ll(head);
cout<<"\n";


struct node*head2=NULL;
head2=push_atend(head2,3);
head2=push_atend(head2,7);
head2=push_atend(head2,10);
head2=push_atend(head2,14);
head2=push_atend(head2,29);
head2=push_atend(head2,30);
head2=push_atend(head2,1120);



print_single_ll(head2);
cout<<"\n";


struct node*head3=NULL;
intersection_ll(&head,&head2,&head3);
print_single_ll(head3);
return 1;
}