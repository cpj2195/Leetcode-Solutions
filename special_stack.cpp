#include "essentials.cpp"

class Stack{
stack <int> s1;
stack <int> s2;
public:

void push1(int x);
int pop1();
int get_min1();


};

 void Stack::push1(int x){


    s1.push(x);
    if(!s2.empty()){
        if(x<s2.top()){
            s2.push(x);
            
        }
        else{
            s2.push(s2.top());
        }
        
    }
    else{
        s2.push(x);
        
    }



}


int Stack:: pop1(){
    s2.pop();
    int element=s1.top();
    s1.pop();

    return element;

}


int Stack:: get_min1(){
    cout<<s2.top()<<endl;
    return 1;
    
    }



int main()
{


Stack s;
s.push1(1);
s.push1(4);
s.push1(10);
s.push1(12);
cout<<s.pop1()<<endl;
cout<<s.pop1()<<endl;

// cout<<s.get_min1()<<endl;
s.get_min1();

return 1;
    


}