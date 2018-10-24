#include "essentials.cpp"

class Queue{
    public:
    stack<int>s1;
    stack<int>s2;
    bool enqueue(int x);
    int dequeue();
    


};

bool Queue::enqueue(int x){
    s1.push(x);
}

int Queue::dequeue(){
    if(s1.empty() && s2.empty()){
        return INT_MAX;
    }
    else{
        if(s2.empty()){
            while(s1.size()>0){
                s2.push(s1.top());
                s1.pop();
            }
            

        }
        int element=s2.top();
            s2.pop();
            return element;
    }
}

int main(){



    Queue q;
    q.enqueue(1);
    q.enqueue(4);
    q.enqueue(9);
    q.enqueue(10);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 1;



}