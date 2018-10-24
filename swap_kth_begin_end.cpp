#include "essentials.cpp"


int count_nodes(struct node*head){

int count=0;
    if(head==NULL){
        return 0;
    }
    else{
        struct node*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
}


void swap_kth(struct node**head,int k){

int count;
// struct node*temp1=*head;
struct node*begin=*head;
    struct node*begin_prev=NULL;
    struct node*end=*head;
    struct node*end_prev=NULL;
count=count_nodes(*head);

cout<<count<<endl;
if(k<=0 || k>count){
    return;
}
else if(*head==NULL){
    return;
}
else if(2*k-1==count){
    return;
}

else {

for(int i=1;i<k;i++){
    begin_prev=begin;
    begin=begin->next;
}
for(int j=0;j<count-k;j++){
    end_prev=end;
    end=end->next;
}

if(k==1){ 
    struct node*temp=begin->next;
    
    end_prev->next=begin;
    
    end_prev->next->next=NULL;

    end->next=temp;
   
    *head=end;
    
    // print_single_ll(*head);
    return;


}


else if(k==count){

struct node*temp1=end->next;
begin_prev->next=end;
begin_prev->next->next=NULL;
begin->next=temp1;
*head=begin;
print_single_ll(*head);
return;

}


else{
if(begin_prev){
    begin_prev->next=end;
}

if(end_prev){
    end_prev->next=begin;
}


struct node*temp=end->next;
end->next=begin->next;
begin->next=temp;



return;
}
}





}



int main(){
    struct node*head=NULL;
    head=push_atend(head,13);
    head=push_atend(head,24);
    head=push_atend(head,1);
    head=push_atend(head,56);
    head=push_atend(head,37);
    head=push_atend(head,20);
    head=push_atend(head,16);
    head=push_atend(head,30);
    print_single_ll(head);
    // int count=count_nodes(head);
    // cout<<count;
    swap_kth(&head,8);
    // print_single_ll(head);
    return 1;
}