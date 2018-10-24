#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



struct node{
    int data;
    struct node*prev;
    struct node*next;
};


void print_doubly_ll(struct node*head){



    struct node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


struct node*add_atfront(struct node*head,int key){


if(head==NULL){
    struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;
hello->prev=NULL;
hello->next=NULL;
head=hello;
return head;
    
}
else{

struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;
hello->prev=NULL;
struct node*temp=head;

temp->prev=hello;

hello->next=temp;
head=hello;
return head;
}

}


struct node*addatend(struct node*head , int key){

if(head==NULL){



struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;
hello->prev=NULL;
hello->next=NULL;
head=hello;
return head;



}
else{
struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;
struct node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}

temp->next=hello;
hello->prev=temp;
hello->next=NULL;
return head;

}

}


struct node* add_nodeafter(struct node*head, int node, int key){

if(head==NULL){

struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;
hello->prev=NULL;
hello->next=NULL;
head=hello;
return head;
}


else if(head->data==node){

struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;
struct node*temp=head;

if(head->next){
    struct node*temp1=head->next;
    hello->next=temp1;
    temp1->prev=hello;
    hello->prev=head;
    temp->next=hello;
    

}
else{
    hello->prev=temp;
    temp->next=hello;
    hello->next=NULL;
    
}
return head;
}


else
{
struct node*hello=(struct node*)malloc(sizeof(struct node));
hello->data=key;
struct node*prev;
struct node*temp2=head->next;

while(temp2->data!=node){
    prev=temp2;
    temp2=temp2->next;
    

    
}

if(temp2->next)
{
prev=temp2;
temp2=temp2->next;
prev->next=hello;
hello->prev=prev;
hello->next=temp2;
temp2->prev=hello;
return head;
}
else{

head=addatend(head,key);
return head;


}


}

}




void delete_node_dll(struct node**head,int key){

struct node*temp=*head;
if(*head==NULL){
    return;

}

else if( temp->data==key){

if(temp->next==NULL){
    free(temp);
    *head=NULL;
}
else{

struct node*temp1=temp->next;
free(temp);
*head=temp1;
temp1->prev=NULL;
}
}


else{
    
struct node*prev;
while(temp->data!=key){
    prev=temp;
    temp=temp->next;
}

if(temp->next){
    struct node*temp2=temp->next;
    prev->next=temp2;
    temp2->prev=prev;
    free(temp);
}
else{
prev->next=NULL;
free(temp);


}

}


}



 void reverse_dll(struct node **head){

    if(*head==NULL){
        return;
    }
else{

struct node*current=*head;
struct node*temp=NULL;
while(current!=NULL){

    // cout<<"Before "<<temp->data<<endl;

temp=current->prev;
current->prev=current->next;
current->next=temp;
current=current->prev;
// cout<<"After "<<temp->data<<endl;

}
cout<<temp->data<<endl;
if(temp!=NULL){
    *head=temp->prev;
}



}


}


void delete_position(struct node**head, int position,int count){


if(*head==NULL){
    return;
}
else if(position==1){

struct node*temp=*head;
if(temp->next){
    struct node*temp1=temp->next;
    free(temp);
    temp1->prev=NULL;
    *head=temp1;
    return;
}
else{
    free(temp);
    *head=NULL;
    return;
}}

else if(position<=count){


struct node*temp=*head;
struct node*prev;
for(int i=0;i<position-1;i++){
    prev=temp;
    temp=temp->next;    

}
if(temp->next){
    prev->next=temp->next;
    temp->next->prev=prev;
    free(temp);
}

else{

prev->next=NULL;
free(temp);

}
}
else{
    return;
}
}





void find_pairs(struct node**head, int sum){

struct node*temp=*head;
if(*head==NULL){
    return;
}
else if(temp->next==NULL && sum==temp->data){
    cout<<temp->data<<endl;
    return;
}
else{

struct node*end=*head;
while(end->next!=NULL){
    
    end=end->next;

}


while(temp->next!=end){

if(temp->data+end->data==sum){
    cout<<temp->data<<" "<<end->data<<endl;
    temp=temp->next;
    end=end->prev;
    
}
else if((temp->data+end->data)<sum){
    temp=temp->next;
}
else{
    end=end->prev;
}

}

if(temp->next==end && end->prev==temp){
    cout<<"no possible pair"<<endl;
    return;

}

}

}



// void swap_kth(struct  node**head, int k,int count){

// if(*head==NULL || k==0 || k>count){
//     return;
// }

// else if(k==1){

// struct node*begin=*head;
// struct node*prev_begin;
// struct node*end_prev;

// struct node*end=*head;
// while(end->next!=NULL){
//     end_prev=end;
//     end=end->next;
// }
// if(count!=2 )


// }



void delete_all(struct node**head, int key){

if(*head==NULL){
    
    return;

}
else{

struct node*current=*head;
while(current!=NULL){

if(current->data==key){

    if(current->next){
        struct node*next=current->next;
        delete_node_dll(*&head,current->data);
        current=next;

    }
    else{
        // cout<<"hi"<<endl;
        delete_node_dll(&*head,current->data);
        break;
    }
   
}
else{
    current=current->next;
}

}

}
}



void remove_duplicates_unsorted(struct node**head){

struct node*current=*head;

if(*head==NULL){
    return;
}

while(current->next->next!=NULL){

struct node*temp=current->next;
while(temp!=NULL){

if(temp->data==current->data){

if(temp->next){
delete_node_dll(&*head,temp->data);
temp=temp->next;

}
else{
    delete_node_dll(&*head,temp->data);
    break;
    

}



}
else {
   
    temp=temp->next;
    
}


}
current=current->next;

}



}


void insert_insorted(struct node**head, int key){


    struct node*temp=*head;
    if(temp==NULL){
        return;
    }
    else if(key<temp->data ){
        struct node*current=(struct node*)malloc(sizeof(struct node));
        current->data=key;
        current->next=*head;
        temp->prev=current;
        current->prev=NULL;;
        *head=current;
        return;
    }
    else{

        while(temp->next && temp->next->data<key){
            temp=temp->next;
        }
        
    *head=add_nodeafter(*head,temp->data,key);
    }

}


void count_triplets(struct node*head, int sum){

if(head==NULL){
    return;
}
else {

struct node*begin=head;
struct node*end1;
struct node*end=head;
while(end->next!=NULL){
    end=end->next;
}
struct node*current=head;
while(current->next->next->next!=NULL){
    begin=current->next;
end1=end;
    
    while(begin->data<end1->data){
       
        if(begin->data+end1->data+current->data==sum){
            cout<<current->data<<" "<<begin->data<<" "<<end1->data<<endl;
            
            begin=begin->next;
            end1=end1->prev;
            
        }
        else if(begin->data+end1->data+current->data<sum){
            begin=begin->next;
        }
        else{
            end1=end1->prev;
        }
        
    }
    current=current->next;
}


}
}


int main(){



    struct node*head=NULL;

    // head=add_atfront(head,1);
    // head=add_atfront(head,2);
    // head=add_atfront(head,3);
    // head=addatend(head,23);
    // head=addatend(head,23);
    // head=addatend(head,23);
    // head=addatend(head,23);

    // head=addatend(head,23);
    // head=addatend(head,23);
    // head=addatend(head,23);
    // head=addatend(head,23);
    head=addatend(head,4);
// head=addatend(head,28);
    head=addatend(head,14);
    head=addatend(head,23);
    head=addatend(head,28);
    head=addatend(head,40);
    head=addatend(head,49);
    // head=addatend(head,28);
    // head=addatend(head,23);
    head=addatend(head,50);
    // head=addatend(head,28);
    // head=addatend(head,23);
    // head=addatend(head,28);
    

    // head=add_nodeafter(head,1,23);
    // head=add_nodeafter(head,3,23);
    // head=add_nodeafter(head,90,1029);
    // delete_node_dll(&head,1);
    // delete_node_dll(&head,3);
    // delete_node_dll(&head,1029);
    // head=rev(head);
    // print_doubly_ll(head);
    cout<<"\n";
    // remove_duplicates_unsorted(&head);
    insert_insorted(&head,51);
    insert_insorted(&head,22);
    insert_insorted(&head,1);
    print_doubly_ll(head);
    cout<<"\n";
    reverse_dll(&head);
    cout<<"\n";
    
    // print_doubly_ll(head);
    
    // count_triplets(head,58);

    //  cout<<"\n";

    
    // delete_position(&head,6,6);
    // find_pairs(&head,0);
    // find_pairs(&head,18);
    // print_doubly_ll(head);
    // delete_position(&head,);


    return 1;

}