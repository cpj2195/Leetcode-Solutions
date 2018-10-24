#include "essentials.cpp"


int prefix_evaluation(string test){




    stack<char>s;
    for(int i=test.length()-1;i>=0;i--){
        if(test[i]>='0'&& test[i]<='9'){
            s.push(test[i]-'0');
        }
        else{
            if(!s.empty()){
                char a=s.top();
                s.pop();
                char b=s.top();
                s.pop();
                if(test[i]=='+'){
                    s.push(b+a);
                }
                else if(test[i]=='-'){
                    s.push(a-b);
                }
                else if(test[i]=='*'){
                    s.push(b*a);
                }
                else{
                    s.push(a/b);
                }
            }
        
        }
        

    }
    return s.top();
}


int main(){

string test="-+8/632";
int a=prefix_evaluation(test);
cout<<a<<endl;
return 1;

    
}