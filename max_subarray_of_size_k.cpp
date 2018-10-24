#include "essentials.cpp"


void max_subarray_k(int array[],int size, int k){

for(int i=0;i<=size-k;i++){
int max=array[i];
for(int j=i;j<i+k;j++){
if(array[j]>max){
    max=array[j];
    
}

}
cout<<max<<" ";
}



}







int main(){

int array[]={1, 2, 3, 1, 4, 5, 2, 3, 6};
int size=sizeof(array)/sizeof(array[0]);

int k=3;


max_subarray_k(array,size,k);
return 1;





}