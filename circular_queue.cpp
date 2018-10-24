#include "essentials.cpp"


class Circular_queue{

int front;
int rear;
int array[100];
public:
Circular_queue(){
    front=-1;
    rear=-1;
}
void enqueue(int x);
int dequeue();
bool is_empty();


};

void Circular_queue::enqueue(int x){

if((rear+1)%100==front){
    return;

}
if(is_empty()){
    front=0;
    rear=0;
}
else{
    rear=(rear+1)%100;

    
}

    array[rear]=x;
}


int Circular_queue::dequeue(){
    if(front==-1 && rear==-1){
        return INT_MAX;
    }
    else if(front==rear){
        front=rear=-1;
    }
    
    else{
        int element=array[front];
        front=(front+1)%100;
        return element;
    }
}

bool Circular_queue::is_empty(){

    return(rear==-1 && front==-1);

}


int main(){


    Circular_queue q;
    q.enqueue(1);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(10);
    cout<<q.dequeue()<<endl;
    // while(!q.is_empty()){
    //     cout<<q.dequeue()<<endl;
    // }
return 1;




}