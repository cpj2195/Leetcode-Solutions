#include"essentials.cpp"
# define max 100

class Dequeue{
int front; 
int rear;
int size;
int array[max];

public:
Dequeue(int size){
    front=-1;
    rear=0;
    this->size=size;

}
void insert_at_front(int x);
void insert_at_rear(int x);
int delete_from_front();
int delete_from_rear();


bool is_empty();
bool is_full();



};

bool Dequeue::is_empty(){
    return (front==-1 );
}

bool Dequeue::is_full(){

    
    return((front==0 && rear==size-1) || front==rear+1);
    
}



void Dequeue::insert_at_rear(int x){

    if(is_full()){
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    if(rear==size-1){
        rear=0;
    }
    else{
        rear=rear+1;
    }
    array[rear]=x;

}


void Dequeue::insert_at_front(int x){



    if(is_full()){
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    if(front==0){
        front=size-1;
    }
    else{
        front=front-1;
    }
    array[front]=x;
}


int Dequeue::delete_from_front(){
    if(is_empty()){
        return INT_MAX;
    }
    if(front==rear){
        front=-1;
        rear=-1;
    }
    if(front==size-1){
        int element=array[front];
        front=0;
        return element;
    }
    else{
        int element=array[front];

        front=front+1;
        return element;
    }
}


int Dequeue::delete_from_rear(){
    if(is_empty()){
        return INT_MAX;
    }


    if(front==rear){
        front=-1;
        rear=-1;

    }
    if(rear==0){
        int element=array[rear];
        rear=size-1;
        return element;

    }
    else{
        int element=array[rear];
        rear=rear-1;
        return element;
    }
}

int main(){



Dequeue d(10);
d.insert_at_front(5);
d.insert_at_front(0);
d.insert_at_front(12);
d.insert_at_rear(50);
d.insert_at_rear(51);
d.insert_at_rear(52);
cout<<d.delete_from_rear()<<endl;
cout<<d.delete_from_front()<<endl;
return 1;


}