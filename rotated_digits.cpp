#include"essentials.cpp"

int check_valid(int n){
if(n>=0 && n<10){

if(n==3 || n==4 || n==7){
    return -1;
}
else if(n==0 || n==1 || n==8){
    return n;
    // return true;
}
else if(n==2){
    return 5;
}
else if(n==5){
    return 2;
}
else if(n==6){
    return 9;
}
else if(n==9){
    return 6;
}
}
}


int check_range(int x){
int n=0;
int count1=0;
for(int i=1;i<=x;i++){
if(i<10){
    int y=check_valid(i);
    if(y>=0){
        n=n*10+y;

    if(n!=i){
        count1++;
        cout<<i<<endl;
    }
    }
   
   
}
else{
int number=0;
while(i>0){
int digit=i%10;
int y=check_valid(digit);
if(y>=0){

number=number*10+y;
i=i/10;
}




}





}




}





}




int main(){
    cout<<check_valid(3)<<endl;
    cout<<check_valid(10)<<endl;
    cout<<check_valid(3)<<endl;
    cout<<check_valid(3)<<endl;

return 1;
}