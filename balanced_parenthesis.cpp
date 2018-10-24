#include "essentials.cpp"


bool check_matching(char c,char d){
    if(c=='[' && d==']'){
        return true;
    }
     else if(c=='(' && d==')'){
        return true;
    }
    else if(c=='{' && d=='}'){
        return true;
    }
    else 
    return false;

}

bool check_balanced(string s){


    stack<char>s1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            s1.push(s[i]);

        }
        else if (s[i]=='}' || s[i]==']' || s[i]==')')
        {
            if(!s1.empty()){
                char mat=s1.top();
                s1.pop();

                
                
                if(!check_matching(mat,s[i])){
                cout<<"pair matched"<<endl;
                
                }
                
            }
            else{
                return false;
                
            }
            
            
        }
    }

    
    if(!s1.empty()){
        return false;
    }
    else
    return true;

}

int main(){


    string s="(]";
    // cout<<s<endl;
    cout<<check_balanced(s)<<endl;
    return 1;

}