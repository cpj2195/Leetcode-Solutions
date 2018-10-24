#include "essentials.cpp"


int precedence(char c){

if(c=='^')
    {
    return 4;
    }
    else if(c=='*' || c=='/'){
        return 3;
    }
    else if( c=='+' || c=='-'){
        return 2;
    }
    else{
        return -1;
    }

}

string  infix_to_postfix(string test){

stack<char>s;
string output="";
for(int i=0;i<test.length();i++)
{

    if(test[i]>='a' && test[i]<='z')
    {
        output+=test[i];
    }


else if(test[i]=='+' || test[i]=='-' || test[i]=='*' || test[i]=='/' || test[i]=='^')
    {


        if(s.empty())
        {
            s.push(test[i]);
        }
        else
        {
        while(!s.empty() && precedence(s.top())>=precedence(test[i]))
        {
            output+=s.top();
            s.pop();
        }
        s.push(test[i]);
        }

    }

else if(test[i]=='('){
    s.push(test[i]);

    }
    

else 
    {
        while(!s.empty() && s.top()!='(')
        {
            output+=s.top();   
            s.pop();
        }
        
        s.pop();
        
    }
cout<<output<<endl;
}

while(!s.empty())
{
    output+=s.top();
    s.pop();
}
return output;
}







int main(){


string test="(a-b/c)*(a/k-l)";
reverse(test.begin(),test.end());
cout<<"test  "<<test<<endl;
for(int i=0;i<test.length();i++)
{
    if(test[i]=='('){
        test[i]=')';
        
    }
    else if(test[i]==')'){
        test[i]='(';
        
    }
}
cout<<"test  "<<test<<endl;
string output="";
output+=infix_to_postfix(test);

cout<<"The postfix expression is"<<infix_to_postfix(test)<<endl;

reverse(output.begin(),output.end());

cout<<"The prefix expression is "<<output<<endl;



return 1;
// cout<<output<<endl
// *-a/bc-/akl
}