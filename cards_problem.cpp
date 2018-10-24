#include"essentials.cpp"

// m=types of cards
// n=the required sum

int number_of_ways_making_change(int cards[],int n,int m){

if(n==0){
    return 1;
}
if(m<=0 && n>0){
return 0;
}
if(n<0){
    return 0;
}

return number_of_ways_making_change(cards,n-cards[m-1],m)+number_of_ways_making_change(cards,n,m-1);



}


int main(){





    int cards[]={1,2,3};
    int m=sizeof(cards)/sizeof(cards[0]);
    int n=4;

cout<<number_of_ways_making_change(cards,n,m)<<endl;
return 1;


    }
