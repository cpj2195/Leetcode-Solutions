#include "essentials.cpp"

void delete_greater(struct node**head){

struct node*temp=*head;
struct node*temp1=temp->next;
struct node*prev=*head;
if(*head==NULL){
    return;
}
else{

while(temp1->data>prev->data && temp1->next!=NULL){
    if(temp1->next){
        prev->next=temp1->next;
        free(temp1);
       
        if(prev->next){
            temp1=prev->next;
        }else{
            temp1=NULL;
        }
    }
    else{
        prev->next=NULL;
        free(temp1);
    }

    if(temp1->data<prev->data){
        prev=temp1;
        temp1=temp1->next;
    }
}


}

}



void delete_greater_node(struct node**head){

if(*head==NULL){
    return;
}

struct node*temp=*head;
struct node*temp1=temp->next;
struct node*prev=*head;

while(temp->next){

if(temp1->data>temp->data){
        if(temp1->next){
        temp->data=temp1->data;
        temp->next=temp1->next;
        free(temp1);        

        temp1=temp->next;
        // cout<<temp->data<<" "<<temp1->data<<endl;
        }
        else{
            temp->data=temp1->data;
            free(temp1);
        temp->next=NULL;
        temp1=NULL;
        }
    
}
else{
    
    temp=temp->next;
    temp1=temp->next;
    

}

}




}











int main(){


    struct node*head=NULL;
    head=push_atend(head,12);
    head=push_atend(head,15);
    head=push_atend(head,10);
    head=push_atend(head,11);
    head=push_atend(head,5);
    head=push_atend(head,6);
    head=push_atend(head,2);
    head=push_atend(head,3);

    print_single_ll(head);
    cout<<"\n";
    delete_greater_node(&head);
    cout<<"\n";
    print_single_ll(head);


    return 1;
}