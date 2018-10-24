#include "essentials.cpp"




string run_length(string test){
string output="";
int j=0;
for(int i=0;i<test.length()-1;i++){
    int count=1;
    while(test[i]==test[i+1]){
        count++;
        i++;


    }
    output+=test[i];
    
    output=output+to_string(count);


}

return output;
}







int main(){


    string test="wwwwwweeeeeffffaaaaa";
    cout<<test.length()<<endl;
    string output="";
    output+=run_length(test);
    cout<<output<<endl;
    return 1;
}