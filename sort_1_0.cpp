#include"essentials.cpp"


void sort_array(int array[],int size){

int i=0;
int j=size-1;


while(i<size && j>=0 && i<j){

while(i<j && array[i]==0){
    i++;
}
while(i<j && array[j]==1){
    j--;
}
if(i<j && array[i]>array[j]){
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
}


}






}










int main(){
    int array[]={0,0,0,1,0,1,0,1,0};
    int size=sizeof(array)/sizeof(array[0]);

    sort_array(array,size);
    print_array(array,size);
    return 1;
}