#include "essentials.cpp"


int max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}


int count_common_nodes(struct node*head1,struct node*head2){



    struct node*temp1=head1;
    struct node*temp2=head2;
    if(!head1 && !head2){
        return 0;
    }
    int count=0;
    while(temp1 && temp2){
        if(temp1->data==temp2->data){
            count++;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;

        }
    }
    return count;
}

int longest_palindrome_length(struct node*head){

int length=0;
struct node*current=head;
struct node*prev=NULL;
struct node*next;


while(current){


    struct node*next=current->next;
    current->next=prev;
    length=max(length,2*count_common_nodes(prev,next)+1);
    length=max(length,2*count_common_nodes(current,next));
    prev=current;
    current=next;
}

return length;

}






int main(){


struct node*head1=NULL;
struct node*head2=NULL;



head1=push_atend(head1,5);
head1=push_atend(head1,3);
head1=push_atend(head1,7);
head1=push_atend(head1,3);
head1=push_atend(head1,3);
head1=push_atend(head1,7);
head1=push_atend(head1,3);
head1=push_atend(head1,5);

// int count=count_common_nodes(head1,head2);
// cout<<count<<endl;
int length=longest_palindrome_length(head1);

cout<<length<<endl;


return 1;


}