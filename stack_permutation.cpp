#include "essentials.cpp"


bool stack_permutation(queue<int>q1,queue<int>q2){

stack<int>s;


while(!q1.empty() && !q2.empty()){

    if(q1.front()==q2.front()){
        q1.pop();
        q2.pop();
        if(!s.empty()){
            if(s.top()==q2.front()){
                    s.pop();
                    q2.pop();
            }
        }
    }

    else{
        s.push(q1.front());
        q1.pop();

    }


}


if(s.empty() && q1.empty() && q2.empty()){
    return true;
}
else{
    return false;}



}











int  main(){

queue<int>q1;
queue<int>q2;
q1.push(1);
q1.push(2);
q1.push(3);



q2.push(3);
q2.push(1);
q2.push(2);


if(stack_permutation(q1,q2)){
    cout<<"yes it is"<<endl;
}
else{
    cout<<"no it isnt"<<endl;

}


return 1;






}