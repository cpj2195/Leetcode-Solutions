#include "essentials.cpp"
#define max 100


class Stack{
    queue<int>q;

    public:
    void push1(int x);
    int pop1();
    
};

void Stack::push1(int x){

int size=q.size();
if(size==max){
    cout<<"stack already full"<<endl;
    return;
}
q.push(x);
while(q.front()!=x){
    int top1=q.front();
    q.pop();
    q.push(top1);
}

}

int Stack::pop1(){


    if(q.size()==0){
        return INT_MAX;
    }
    int top1=q.front();
    q.pop();
    return top1;
}



int main(){


    Stack s;
    s.push1(2);
    s.push1(12);
    s.push1(3);
    s.push1(14);
    s.push1(20);

    cout<<s.pop1()<<endl;
    return 1;



}