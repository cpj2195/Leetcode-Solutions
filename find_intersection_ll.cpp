#include "essentials.cpp"




struct Node{
    int data;
    struct Node*next;
};

int get_count(struct Node*head){
    if(head==NULL){
        return -1;
    }
    int count=0;
    struct Node*temp=head;
    while(temp!=NULL){


        count++;
        temp=temp->next;
    }
return count;
}




void getIntersectionNode(struct Node*head1, struct Node*head2,int d){


if(head1==NULL && head2==NULL){
    return;
}

else if(head1==NULL || head2==NULL){
    return ;
}



struct Node*temp3=head1;


for(int i=0;i<d;i++){

temp3=temp3->next;

}


struct Node*temp4=head2;

cout<<temp3->data<<"  "<<temp4->data<<endl;


while(temp3 && temp4){

if(temp3->data==temp4->data){
    cout<<"intetrsection point is"<<"  "<<temp3->data<<endl;
    return;
}
else{
    temp3=temp3->next;
    temp4=temp4->next;
}



}

cout<<"no intersection point"<<endl;
return;



}



int main()
{ 
  struct Node* newNode;
  struct Node* head1 =
            (struct Node*) malloc(sizeof(struct Node));
  head1->data  = 10;
 
  struct Node* head2 =
            (struct Node*) malloc(sizeof(struct Node));
  head2->data  = 3;
 
  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 6;
  head2->next = newNode;
 
  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 9;
  head2->next->next = newNode;
 
  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 15;
  head1->next = newNode;
  head2->next->next->next  = newNode;
 
  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 30;
  head1->next->next= newNode;
 
  head1->next->next->next = NULL;
 int count1=get_count(head1);
int count2=get_count(head2);

int d=abs(count1-count2);
if(count1>count2)
{
    getIntersectionNode(head1,head2,d);}
else{
     getIntersectionNode(head2,head1,d);
}
 
  return 1;
}