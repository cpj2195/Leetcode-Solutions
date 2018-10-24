#include"essentials.cpp"

#define max 100



class Stack{


    int top;


    public:
    Stack(){top=-1;};
    int array[max];
    bool is_empty();
    int pop();
    bool push(int x);
    int top_element();




};

bool Stack::is_empty(){
    return(top<0);

}

int Stack::pop(){
    if(top<0){
        cout<<"Stack underflow"<<endl;
        return -1;

    }
    else{
        return array[top--];
    }
}

bool Stack::push(int x){
    if(top>max){
        cout<<"stack Overflow"<<endl;
        return false;
    }
    else{
        array[++top]=x;
        return true;
    }
}


int Stack::top_element(){

    if(top<0){
        cout<<"Stack underflow"<<endl;
        return -1;

    }
    else{
        return array[top];
    }
}




int main(){


Stack s1;
// s1.push(1);
// s1.push(2);
// s1.push(3);
// s1.push(4);


while(!s1.is_empty()){
    cout<<s1.top_element()<<endl;
    s1.pop();
}


cout<<s1.is_empty()<<endl;

return 1;

}