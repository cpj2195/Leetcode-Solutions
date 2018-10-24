#include "essentials.cpp"



struct node*merge_ll(struct node*head1,struct node*head2){


if(head1==NULL && head2==NULL ){
    return NULL;
}

else if(head1==NULL && head2!=NULL ){
    return head2;
}


else if(head1!=NULL && head2==NULL ){
    return head1;
}
else{
if(head1->data<=head2->data){

    head1->next=merge_ll(head1->next,head2);
    return head1;
}
else{
    head2->next=merge_ll(head1,head2->next);
    return head2;
}



}



}



int main(){
    struct node*head1=NULL;
head1=push_atend(head1,1);
head1=push_atend(head1,5);
head1=push_atend(head1,7);
head1=push_atend(head1,14);

print_single_ll(head1);
cout<<"\n";


struct node*head2=NULL;


head2=push_atend(head2,3);
head2=push_atend(head2,9);
head2=push_atend(head2,10);
head2=push_atend(head2,12);
head2=push_atend(head2,91);

print_single_ll(head2);


struct node*head3=NULL;
head3=merge_ll(head1,head2);
cout<<"\n";
print_single_ll(head3);
return 1;

}