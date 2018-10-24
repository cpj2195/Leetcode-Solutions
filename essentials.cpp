#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<forward_list> 
#include<string>
#include<vector>
#include<map>
#include<deque>
#include<list>
// #include<pair>s

using namespace std; 


struct bnode{
    struct bnode*left;
    struct bnode*right;
    int data;
};

struct bnode*newNode(int x){
    struct bnode*root=new bnode;
    root->left=NULL;
    root->right=NULL;
    root->data=x;
    return root;


}


struct node{
    int data;
    struct node*next;
};


void move_node(struct node**head,struct node**head2){


struct node*temp=*head;

struct node*ahead=temp->next;
temp->next=*head2;
*head2=temp;
*head=ahead;



}
struct node*push_atend(struct node*head,int data){

struct node*temp=new node;
struct node*temp1=head;

temp->data=data;
if(head==NULL){
    head=temp;
    temp->next=NULL;
    
}
else{

    while(temp1->next!=NULL){
        temp1=temp1->next;
    }

temp1->next=temp;
temp->next=NULL;




}

return (head);

}

void print_single_ll(struct node*head){
    struct node*temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;

}
template<typename T,typename A>
void print_vector(vector<T,A>const& v1){

for(auto it=v1.begin();it!=v1.end();it++){
    cout<<*it<<" ";
}
cout<<endl;

}




void swap(int*a, int*b){

    int temp=*a;
    *a=*b;
    *b=temp;
}


void print_array(int array[],int size){

    for(int i=0;i<size;i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;
}


void print_stack(stack<int>s1){


    while(!s1.empty()){
        cout<<s1.top()<<"  ";
        s1.pop();

    }
}

void print_queue(queue<int>s1){


    while(!s1.empty()){
        cout<<s1.front()<<"  ";
        s1.pop();

    }
}





void print_maxheap(priority_queue<int>pq){


while(pq.size()!=0){
    cout<<pq.top()<<" ";
    pq.pop();
}
cout<<endl;
}





void print_minheap(priority_queue<int, vector<int>, greater<int> >pq){

while(pq.size()!=0){
    cout<<pq.top()<<" ";
    pq.pop();
}
cout<<endl;
}





