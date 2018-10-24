#include "essentials.cpp"


void delete_m_n(struct node**head,int m, int n){


if(*head==NULL){
    return;


}


struct node*temp=*head;
while(temp){
// int i=1;
// while(i<=m){
//     temp=temp->next;
//     i++;
// }
for(int i=1;i<=m;i++){
    // cout<<i<<endl;
    if(temp==*head){
        temp=temp->next;
        i++;
        
    }
    else{
    temp=temp->next;}
}

int j=1;
cout<<"hi  "<<temp->data<<endl;
while( j<=n){
    if(temp->next){
    struct node*next=temp->next;
    cout<<next->data<<endl;
    temp->next=next->next;
    free(next);
    
    j++;}
    else{
        temp->next=NULL;
        return;
    }
    }
if(!temp->next){
    temp->next=NULL;
    return;
}

}

// cout<<temp->data<<endl;

}







int main(){

struct node*head=NULL;
head=push_atend(head,1);
head=push_atend(head,2);
head=push_atend(head,3);
head=push_atend(head,4);
head=push_atend(head,5);
head=push_atend(head,6);
head=push_atend(head,7);
head=push_atend(head,8);
head=push_atend(head,9);
// head=push_atend(head,10);
print_single_ll(head);
delete_m_n(&head,2,3);
print_single_ll(head);



return 1;

}