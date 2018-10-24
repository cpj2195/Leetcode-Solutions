#include "essentials.cpp"



void delete_at_position(struct node**head,int position){

struct node*temp=*head;
if(position<=0){
    return;
}

if(position==1){
    // cout<<"hello"<<endl;
*head=temp->next;
free(temp);
return;
}
else{
for(int i=1;i<position-1;i++){
    temp=temp->next;
    cout<<"hi"<<endl;

}
struct node*hi=temp->next;
temp->next=hi->next;
free(hi);
return;
}



}




int main(){
struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,4);
head=push_atend(head,39);
head=push_atend(head,12);
head=push_atend(head,30);


delete_at_position(&head,1);

print_single_ll(head);
return 1;



}