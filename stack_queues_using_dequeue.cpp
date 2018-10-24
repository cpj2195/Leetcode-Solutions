#include "essentials.cpp"
# define max 100


class Staqu{

int front;
int front_queue;

int rear;
int array[max];
int size;

public:


Staqu(int size){
    front=size-1;
    rear=0;
    front_queue=0;
}


void push_back(int x);
int  pop_front_queue();
int pop_front_stack();
void push_front(int x);
bool is_full();
bool is_empty1();

};


bool Staqu::is_full(){


return((front==0 && rear==size-1) || front==rear+1);

}


bool Staqu::is_empty1()
{
    return (front ==size-1 && rear==0);
}



void Staqu::push_back(int x){

if(is_full()){
    return;
}

else if(rear==size-1){
    rear=0;
}

array[rear]=x;
rear+=1;

}



void Staqu::push_front(int x){

if(is_full()){
    return;
}

else if(front==0){
    front=size-1 ;
}
else{
    front=front-1;

}
array[front]=x;

}




int Staqu::pop_front_queue(){

if(is_empty1()){
    return INT_MAX;
}

else if(rear==0){
    cout<<"now you have reached end of queue"<<endl;
    return array[rear];
}
else{

    if(front_queue<=rear)
    {
        cout<<"front_queue is "<<front_queue<<endl;
        cout<<"rear is"<<rear<<endl;

    int element=array[front_queue];
    front_queue++;
    return element;
    }
    else{
        return INT_MAX;
    }
}



}



int Staqu::pop_front_stack(){



    if(is_empty1()){
        return INT_MAX;
    }
    else if(front==size-1){
        int element=array[front];

        cout<<"now you have reached end of stack"<<endl;
        return element;
    }
    
    else{
        int element=array[front];

        front=front+1;
        return element;
    }
}


int main(){




Staqu sq(15);
//Queue operations



sq.push_back(3);
sq.push_back(31);
sq.push_back(34);
sq.push_back(14);
sq.push_back(300);
cout<<sq.pop_front_queue()<<endl;
cout<<sq.pop_front_queue()<<endl;
cout<<sq.pop_front_queue()<<endl;

//Stack Operations


sq.push_front(100);
sq.push_front(12);
sq.push_front(129);
sq.push_front(10);
cout<<sq.pop_front_stack()<<endl;
cout<<sq.pop_front_stack()<<endl;

return 1;







}