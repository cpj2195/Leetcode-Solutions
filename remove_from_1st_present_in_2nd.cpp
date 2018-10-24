#include "essentials.cpp"


void remove_from_1st(string &test,string mask){

char *count=(char*)malloc(sizeof(char)*256);
for(int i=0;i<mask.length();i++){
    count[mask[i]]++;

}
int k=0;
string hi="";
for(int i=0;i<test.length();i++){
    if(count[test[i]]>=1){
        test[k++]='\0';
    }
    else{
        test[k++]=test[i];
    }
    cout<<test<<endl;
}

// cout<<test<<endl;


}




 



int main(){

string test="geeksforgeeks";
string mask="egs";

remove_from_1st(test,mask);
return 1;



}