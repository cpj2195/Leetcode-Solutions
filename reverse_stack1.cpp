#include "essentials.cpp"


stack<int> reverse_stack(stack<int>&s){

queue<int>s1;
while(!s.empty()){
    s1.push(s.top());
    s.pop();
}

while(!s1.empty()){
    s.push(s1.front());
    s1.pop();
}

print_stack(s);
return s;
}





int main(){
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);

s=reverse_stack(s);
print_stack(s);


return 1;




}