#include "essentials.cpp"


stack<int> sort_stack(stack<int>&s){
stack<int>s1;

while(!s.empty()){



    if(s1.empty()){
        s1.push(s.top());
        s.pop();

    }
    else

    {   int temp=s.top();
        s.pop();    
        while(!s1.empty() && temp>s1.top())
        {
                  
            s.push(s1.top());
            s1.pop();
        }

        s1.push(temp);

    }


}



return s1;
}




int main(){
stack<int>s;


s.push(30);
s.push(23);
s.push(3);
s.push(300);
s.push(120);
s.push(32);
s.push(23);


stack<int>s1=sort_stack(s);
print_stack(s1);
return 1;






}