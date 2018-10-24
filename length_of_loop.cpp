#include "essentials.cpp"



int node_count(struct node*node1){
    struct node*temp=node1;
    int count=1;
    while(temp->next!=node1){
        count++;
        temp=temp->next;
    }
    return count;




}



int detect_loop(struct node**head){


if(*head==NULL){
    return -1;
}
else{

struct node*slow=*head;
struct node*fast=*head;
while(slow && fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        cout<<"found loop"<<endl;
        

        // struct node*temp=*head;
        // while(slow->next!=temp){

        // }


    }
}
cout<<"no loop"<<endl;


}

}














int main(){
    struct node*head=NULL;
    head=push_atend(head,1);
     head=push_atend(head,11);
      head=push_atend(head,21);
       head=push_atend(head,41);
    head=push_atend(head,2);
    head=push_atend(head,3);
    // head=push_atend(head,31);
    // head=push_atend(head,32);
    // head=push_atend(head,33);
    head=push_atend(head,4);
    head=push_atend(head,5);
    // int count=node_count(head);
    // cout<<count;
    head->next->next->next->next->next->next->next->next = head->next;
    cout<<detect_loop(&head);
    return 1;
}