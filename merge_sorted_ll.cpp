#include "essentials.cpp"




struct node*sorted_merge(struct node*head1,struct node*head2){


struct node*head3=NULL;;


if(head1==NULL && head2==NULL ){
    return head3;
}

else if(head1==NULL && head2!=NULL ){
    return head2;
}


else if(head1!=NULL && head2==NULL ){
    return head1;
}

else{

struct node*temp1=head1;
struct node*temp2=head2;

while(temp1 && temp2){

if(temp1->data<=temp2->data){
    head3=push_atend(head3,temp1->data);
    temp1=temp1->next;
}

else{

    head3=push_atend(head3,temp2->data);
    temp2=temp2->next;

}
}

while(temp1!=NULL){
    head3=push_atend(head3,temp1->data);
    temp1=temp1->next;


}

while(temp2!=NULL){
    head3=push_atend(head3,temp2->data);
    temp2=temp2->next;
}


}


// print_single_ll(head3);

return head3;

// struct node*temp1=head1;
// struct node*temp2=head2;

// struct node*prev1

// while(temp1 && temp2  && prev1){

// if(temp1->data<=temp2->data && temp1==head1 && temp2==head2){
//     prev1=temp1;
//     temp1=temp1->next;
//     prev1->next=temp2;



// }
// else{

// if(temp2->next!=NULL){
//     struct node*temp3=temp2->next;
//     temp2->next=temp1;
//     if(prev1!=NULL){
//         prev1->next=temp2;
//         prev1=prev1->next;
//     }
//     head2=temp3;
// }

// temp2=temp3;
// head1=temp2;

// }







}







int main(){
    struct node*head1=NULL;
head1=push_atend(head1,3);
head1=push_atend(head1,5);
head1=push_atend(head1,7);
head1=push_atend(head1,14);

print_single_ll(head1);
cout<<"\n";


struct node*head2=NULL;


head2=push_atend(head2,1);
head2=push_atend(head2,9);
head2=push_atend(head2,10);
head2=push_atend(head2,12);
head2=push_atend(head2,91);

print_single_ll(head2);


struct node*head3=NULL;
head3=sorted_merge(head1,head2);
cout<<"\n";
print_single_ll(head3);
return 1;

}