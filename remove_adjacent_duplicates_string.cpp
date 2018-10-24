#include "essentials.cpp"



string remove_adjacent(string test){

stack<char>s;
string hello="";
int j=0;
for(int i=0;i<=test.length()-1;i++){

    if(test[i]!=test[i+1]){
        hello+=test[i];
        
       
        

    }
    
    else{
         while(test[i]==test[i+1]){
        i++;
    }
    hello+=test[i];

    }


   
}

return hello;

}



int main(){


string test="hello";
string hello="";
hello+=remove_adjacent(test);
cout<<hello<<endl;

return 1;


    
}