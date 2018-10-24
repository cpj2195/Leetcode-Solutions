#include"essentials.cpp"



int main(){

int num=20;
int temp=1;

while(num>0){
    temp=temp*num;
    // cout<<temp<<endl;
    num=num-1;
}
temp=1333454;
int count=0;
for(int i=5;temp/i>=1;i=i*5){

// count=count+ floor(temp/i);
cout<<" i is "<<i<<endl;
int x=floor(temp/i);
temp=temp/i;
cout<<" x is "<<x<<endl;
count=count+1;



}

cout<<count<<endl;

cout<<temp<<endl;
return 1;


}