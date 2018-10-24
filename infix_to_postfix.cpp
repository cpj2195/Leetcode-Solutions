#include "essentials.cpp"


int precedence(char a){
    if(a=='^'){
        return 4;

    }
    else if(a=='*' || a=='/'){
        return 3;
    }
    else if( a=='+' || a=='-'){
        return 2;
    }
    else{
        return -1;
    }
}


string infix_2_postfix(string exp){

    stack<char>s;
    string postfix="";
for(int i=0;i<exp.length();i++){
    
    if((exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='B')){
        postfix+=exp[i];
    }
    else if (exp[i]=='+' || exp[i]=='*' || exp[i]=='-' || exp[i]=='/' || exp[i]=='^')
    {
        if(s.empty()){
            s.push(exp[i]);
        }
        
        else  {
            while(!s.empty() && precedence(s.top())>=precedence(exp[i])){
                postfix+=s.top();
                s.pop();
            }
            s.push(exp[i]);

        }
    
    }
    else if(exp[i]=='('){
        s.push(exp[i]);
    }
    else if(exp[i]==')'){
        while(!s.empty() && s.top()!='('){
            postfix+=s.top();
            s.pop();
        }
        s.pop();

    }
    cout<<exp[i]<<endl;
}

while(!s.empty()){
    postfix+=s.top();
    s.pop();
}
cout<<"final postfix : "<<postfix<<endl;

return postfix;

}


int main(){



    string exp="a+b*(c^d-e)^(f+g*h)-i";
   



    cout<<infix_2_postfix(exp)<<endl;

    return 1;

}

// abcd^e-fgh*+^*+i-
