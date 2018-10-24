#include "essentials.cpp"


void check_for_palindrome(struct node*head){


if(head==NULL){
    return;

}

struct node*temp=head;

stack<int>s;

while(temp!=NULL){
    s.push(temp->data);
    temp=temp->next;
}


struct node*temp1=head;
// cout<<s.size()<<endl;
// cout<<temp1->data<<endl;
while(!s.empty() && temp1!=NULL){

if(s.top()==temp1->data){
    s.pop();
    temp1=temp1->next;
}

else{
    cout<<"no it's not"<<endl;
    return;
}



}
if(s.empty()){
    cout<<"yes its a palindrome"<<endl;
    return;
}


}











int main(){

struct node*head=NULL;
head=push_atend(head,3);
head=push_atend(head,5);
head=push_atend(head,7);
// head=push_atend(head,22);
head=push_atend(head,6);
head=push_atend(head,5);
head=push_atend(head,3);
print_single_ll(head);
cout<<"\n";
// cout<<check_for_palindrome(head)<<endl;
check_for_palindrome(head);
// print_single_ll(head);
return 1;

}