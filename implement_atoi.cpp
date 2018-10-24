#include"essentials.cpp"




int my_atoi(string input){

int sign=1;
int num=0;

if(input[0]=='-'){
    sign=-1;
}
if(sign==-1){

for(int i=1;i<input.length();i++)

{

if(isdigit(input[i])){

num=num*10+input[i]-'0';
cout<<num<<endl;}

else{
    return INT_MAX;
}

}

num=num*-1;



}

else{

for(int i=0;i<input.length();i++)

{
num=num*10+(input[i]-'0');
// cout<<num<<endl;

}




}


return num;



}





int main(){

string test="-434";


cout<<my_atoi(test)<<endl;
return 1;




}