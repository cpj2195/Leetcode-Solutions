#include "essentials.cpp"


struct node*push_atend_circularll(struct node*head,int data){

struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;

if(head==NULL){

    
    head=temp;
    temp->next=head;
    
}

else{
struct node*temp1=head;
while(temp1->next!=head){
    temp1=temp1->next;

}

temp1->next=temp;
temp->next=head;



}

return head;
}






struct node* push_atbegin_circular(struct node*head,int data){


struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;

if(head==NULL){
    head=temp;
    temp->next=head;
    
}

else{
struct node*temp1=head;
while(temp1->next!=head){
temp1=temp1->next;
}
temp1->next=temp;
temp->next=head;
head=temp;
return head;

}

}
 
struct node*push_after_node(struct node*head,int node,int data){
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;


if(head->data==node){
   
    
    if(head->next!=head){
        struct node*ahead=head->next;
        temp->next=ahead;
        head->next=temp;
        
    }
    else{
        head->next=temp;
        temp->next=head;

    }
    
    return head;
}

else{

struct node*temp1=head->next;

while(temp1->data!=node){
    temp1=temp1->next;
    

}

if(temp1->next){
    struct node*temp2=temp1->next;
    temp1->next=temp;
    temp->next=temp2;
    
}
return head;

}




}



bool check_for_circularll(struct node*head)
{


if(head==NULL){
    return true;
}
else if(head!=NULL && head->next==head){
    return true;
}
else{
    struct node*temp=head;
    
    while(temp->next!=head && temp->next!=NULL){
        temp=temp->next;
        
    }
    if(temp->next==head){
        
        return true;
    }
    else{
        return false;
    }
    
}



}

int count_nodes(struct node*head){

if(head==NULL){
    return -1;
}
else if(head->next==head){
    return 1;
}
else{
    struct node*temp=head;
    int count=1;
    while(temp->next!=head){
        count++;
        temp=temp->next;
    }
    return count;
}



}










void print_circular_ll(struct node*head){

if(head==NULL)
return;
else{
   
   struct node*temp=head;

   while(temp->next!=head){
       cout<<temp->data<<" ";
       temp=temp->next;
   }
cout<<temp->data<<" ";
return;
}
}



void single_to_circular(struct node**head){


if(*head==NULL){
    return;
}
else{
    
    struct node*temp=*head;
    if(temp->next==temp){
        
        *head=temp;
        temp->next=NULL;

    }
    else{
 

        while(temp->next!=*head){
           
            temp=temp->next;
        }
        temp->next=NULL;


    }
}
}


void sorted_insert(struct node**head,int key){

struct node*current=*head;
if(*head==NULL){
    return ;
}

else if(key<current->data){
    struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;

// cout<<"hi"<<endl;
struct node*temp=*head;
while(temp->next!=*head){
    
    temp=temp->next;
}


temp->next=hello;
hello->next=*head;
*head=hello;

    
}
else if(key>=current->data && key<current->next->data){
   *head=push_after_node(*head,current->data,key);
}
else{

struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;

struct node*temp=current->next;
struct node*prev;
while(temp->data<key && temp->next!=*head){

prev=temp;
temp=temp->next;


}
if(temp->next==*head){

*head=push_atend_circularll(*head,key);


}
else{

prev->next=hello;
hello->next=temp;

}


}
}


void delete_node(struct node**head,int data){


struct node*temp=*head;
if(temp==NULL){
    return;
}
else if(temp->data==data){
    struct node*hi=temp->next;
    struct node*temp1=temp->next;
    while(temp1->next!=*head){
        temp1=temp1->next;
    }
    // cout<<temp1->data<<endl;
    free(temp1->next);
    temp1->next=hi;

    *head=hi;
    
    return;
}
else{

struct node*temp1=*head;
struct node*prev;
while(temp1->data!=data && temp1->next!=*head)
{
    prev=temp1;
    temp1=temp1->next;
    

}

prev->next=temp1->next;
free(temp1);
return;

}

}


int main(){
struct node*head=NULL;

head=push_atend_circularll(head,11);


head=push_atend_circularll(head,13);

head=push_atend_circularll(head,22);
head=push_atbegin_circular(head,2);
head=push_atend_circularll(head,92);
head=push_atend_circularll(head,148);
head=push_atend_circularll(head,1039);

head=push_after_node(head,92,98);
// struct node*head1=NULL;
// head1=push_atend(head1,3);
// head1=push_atend(head1,5);
// head1=push_atend(head1,7);
// head1=push_atend(head1,14);

print_circular_ll(head);
// cout<<"\n";
// cout<<count_nodes(head)<<endl;
// single_to_circular(&head);
// print_single_ll(head);

sorted_insert(&head,3);

sorted_insert(&head,24);
sorted_insert(&head,2090);
sorted_insert(&head,1);
sorted_insert(&head,10000);
cout<<"\n";
print_circular_ll(head);
// cout<<head->data<<endl;

// sorted_insert(head,20923);
delete_node(&head,24);
delete_node(&head,1);
delete_node(&head,10000);


cout<<"\n";
print_circular_ll(head);


return 1;

}