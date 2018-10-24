#include "essentials.cpp"


void swapp_nodes(struct node**head,int key1,int key2){


if(key1==key2){
    return;

}

struct node*currx=*head,*prevx=NULL;
struct node*curry=*head,*prevy=NULL;



while (currx!=NULL && currx->data!=key1){


    prevx=currx;
    currx=currx->next;

}


cout<<prevx->data<<endl;
cout<<currx->data<<endl;

while (curry!=NULL && curry->data!=key2){

    prevy=curry;
    curry=curry->next;

}


cout<<prevy->data<<endl;
cout<<curry->data<<endl;


if(currx==NULL || curry==NULL){
    return;
}


if(prevx!=NULL){
    prevx->next=curry;
}
else{
    *head=curry;
}


if(prevy!=NULL){
    prevy->next=currx;
}else{
    *head=currx;
}


struct node*temp=curry->next;
curry->next=currx->next;
currx->next=temp;


// print_single_ll(head);


}









int main(){



    struct node*head=NULL;

    head=push_atend(head,4);
    head=push_atend(head,6);
    head=push_atend(head,14);
    head=push_atend(head,15);
    head=push_atend(head,40);
    print_single_ll(head);
    
    swapp_nodes(&head,6,40);
    print_single_ll(head);
    return 1;


}