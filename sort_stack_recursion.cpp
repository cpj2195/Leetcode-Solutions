#include "essentials.cpp"





void sorted_insert(stack<int>&s, int temp){

if(s.empty() || temp>s.top()){
    s.push(temp);
}
else{

int x=s.top();
s.pop();
sorted_insert(s,temp);

s.push(x);


}



}

void sort_stack(stack<int>&s){

if(!s.empty()){
    int temp=s.top();

    s.pop();
    sort_stack(s);

    sorted_insert(s,temp);
}



}





int main(){


stack<int>s;
s.push(23);
s.push(2);
s.push(26);
s.push(212);
s.push(12);
s.push(10);
s.push(133);


sort_stack(s);
print_stack(s);
return 1;





}