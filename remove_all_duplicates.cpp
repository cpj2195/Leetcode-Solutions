#include "essentials.cpp"


string remove_duplicates(string test){
    string hello="";
    char *count=(char*)malloc(sizeof(char)*256);
    for(int i=0;i<test.length();i++){
        count[test[i]]++;
        if(count[test[i]]==1){
            hello+=test[i];
        }
    }
    
    return hello;
}


int main(){



    string test="aaaabbbbabbcccchhhhhdddggg";
    string hello="";
    hello+=remove_duplicates(test);
    cout<<hello<<endl;
    return 1;
}