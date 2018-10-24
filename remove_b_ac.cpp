#include "essentials.cpp"

void remove_b_ac(string test){

for(int i=0;i<test.length();i++){

int j=0;
if(test[i]=='b'){
    test[i]='\0';
}
else if(test[i]=='a'){
    if((i+1)<test.length() && test[i+1]=='c'){
        test[i]='\0';
        test[i+1]='\0';
        i++;
    }
   
}




}

cout<<test<<endl;



}

int main(){




    string test="acbac";
    string test1="aaac";
    string test2="bbbbd";


    remove_b_ac(test);
    remove_b_ac(test1);
    remove_b_ac(test2);
    return 1;




}