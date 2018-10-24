#include"essentials.cpp"


int main(){

int array[]={10, 2, -2, -20, 10};
int size=sizeof(array)/sizeof(array[0]);
int x=-10;
for(int i=0;i<size-1;i++){
int curr_sum=array[i];
for(int k=i+1;k<size;k++){


curr_sum+=array[k];
if(curr_sum==x){

    cout<<i<<" "<<k<<endl;
}


}


}

return 1;


}

