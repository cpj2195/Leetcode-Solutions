#include "essentials.cpp"


class Queue{

int front;
int rear;
int count;
int capacity;
int *array;


public:
Queue(int x){
    front=0;
    rear=-1;
    count=0;
    capacity=x;
    array=new int[x];
    

}

int pop();
bool push(int x);
bool empty();
int size();

int peek();

};


int Queue::pop(){
if(rear<front){
    cout<<"Queue empty"<<endl;
    return INT_MAX;

}
else{
    
    int res =array[front];
    front++;
    count--;
    return res;
    

}
}

bool Queue::push(int x){


    if(rear<100){
        array[++rear]=x;
        count++;
        return true;
    }
    else{
        cout<<"Queue overflow"<<endl;
        return false;
    }

}
bool Queue::empty()
{
    return(rear<front);
}
int Queue::size(){
    return count;
}

int Queue::peek(){
    return array[front];
}


int main(){


Queue q1(1000);
q1.push(1);
q1.push(2);
q1.push(3);
q1.push(4);
q1.push(5);
q1.push(6);
// int x=q1.pop();
// cout<<x<<endl<<endl;
cout<<"size is "<<q1.size()<<endl;
// cout<<q1.size(q1)<<endl;
cout<<q1.peek()<<endl;
while(!q1.empty()){
    cout<<q1.peek()<<endl;
    q1.pop();
    
}
// cout<<q1.peek()<<endl;

// cout<<q1.size()<<endl;





return 1;
}