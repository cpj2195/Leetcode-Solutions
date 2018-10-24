// #include<bits/stdc++.h>
// #include <bits/stdc++.h>
// #include <iostream>
#include "essentials.cpp"
using namespace std;


// struct node{
//     int data;
//     struct node*next;
// };


// struct node*newll_node(int data){

// struct node*newnode=(struct node*)malloc(sizeof(struct node));
// newnode->data=data;
// newnode->next=NULL;
// return newnode;


// }


// void insert_infront(struct node**head,int data){
//     if(*head==NULL){
//         struct node*temp=newll_node(data);
//         *head=temp;
//         return ;
//     }
//     else{

//         struct node*temp=*head;
//         struct node*temp1=newll_node(data);
//         temp1->next=temp;
//         *head=temp1;
//         return;

//         }



//     }


// void insert_atend(struct node**head,int data){

// if(*head==NULL){
//     struct node*temp=newll_node(data);
//     *head=temp;
//     return;
// }
// else{
// struct node*temp=*head;
// while(temp->next!=NULL){
//     temp=temp->next;
// }
// temp->next=newll_node(data);
// temp->next->next=NULL;
// return;

// }


// }




void print_ll(struct node*head){
if(head==NULL){
    return;
}

else
{

    struct node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

}
void delete_ll(struct node**head){
struct node*temp=*head;
while(temp->next){

struct node*temp1=temp->next;
cout<<"before  "<<temp->data<<" "<<temp1->data<<endl;
free(temp);

temp=temp1;
cout<<"after  "<<temp->data<<" "<<temp1->data<<endl;


}

// cout<<temp->data<<" "<<temp1->data<<endl;
free(temp);
temp=NULL;
// cout<<temp->data<<" "<<endl;
*head=NULL;
// free(head);
// temp=NULL;
// head=NULL;

}


void remove_every_kth(struct node**head,int k){


if(k==0)
{return ;}
else if(k==1){
    delete_ll(head);
}
else{
    int i=1;
struct node*temp=*head;
struct node*prev;
while(i<=k){
    prev=temp;
    temp=temp->next;
if(i==k){


}






}




}




}






int main(){
    cout<<"hello"<<endl;
    struct node*head=NULL;
    push_atend(&head,4);
    // insert_infront(&head,3);
    // insert_infront(&head,2);
    // insert_infront(&head,1)0
    push_atend(&head,3);
    push_atend(&head,2);
    push_atend(&head,1);
    print_ll(head);
    delete_ll(&head);
    print_ll(head);
    // cout<<"heelo"<<endl;
    return 1;
}