#include "essentials.cpp"
string remove_adjacent(string &test){

stack<char>s;


s.push(test[0]);

for(int i=1;i<=test.length()-1;i++){
    char last_removed;
    if(!s.empty() && s.top()==test[i]){

        last_removed=s.top();
        cout<<last_removed<<" "<<endl;
        s.pop();
        

    }
    else{

        if(last_removed==test[i]){}
        else
        {s.push(test[i]);
        last_removed='\0';}
    }
        
    }

string hi="";
while(!s.empty()){
    hi+=s.top();
    s.pop();
}
reverse(hi.begin(),hi.end());
return hi;
}





int main(){

string test="mississippi";


string hello="";
hello+=remove_adjacent(test);
cout<<hello<<endl;
return 1;



}