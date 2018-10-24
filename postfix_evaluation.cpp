#include"essentials.cpp"





int evaluate_postfix(string expression){
    stack<int>s;

for(int i=0;i<expression.length();i++){
    if(expression[i]>='0' and expression[i]<='9'){
        s.push(expression[i]-'0');
    }
    else{
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(expression[i]=='+'){
            s.push(b+a);
        }
         else if(expression[i]=='-'){
            s.push(b-a);
        }
       else  if(expression[i]=='*'){
            s.push(b*a);
        }
        else if(expression[i]=='/'){
            s.push(b/a);
        }

    }
}
return s.top();

}




int main(){
    
    string expression="231*+9-";
    int ans=evaluate_postfix(expression);
    cout<<ans<<endl;
    return 1;
}