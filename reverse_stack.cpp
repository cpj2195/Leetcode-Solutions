#include "essentials.cpp"




void insert_at_bottom(stack<int>&s,int temp){

if(s.empty()){
    s.push(temp);
}
else{

int x=s.top();
s.pop();
insert_at_bottom(s,temp);
s.push(x);

}



}

void reverse1(stack<int>&s){

if(!s.empty()){


    int temp=s.top();
    s.pop();
    reverse1(s);

    insert_at_bottom(s,temp);
}




}


int main(){

stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);

print_stack(s);
reverse1(s);
print_stack(s);
return 1;

}





