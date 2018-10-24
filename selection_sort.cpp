#include"essentials.cpp"



void selection_sort(int array[],int size){
int min_index=0;

for(int i=0;i<size-1;i++){
    int min=array[i];
    for(int j=i+1;j<size;j++){
        if(array[j]<min){
             min=array[j];
             min_index=j;

        }

       
    }
    
swap(&array[i],&array[min_index]); 

}








}



int main(){

int array[]={1,24,34,5,4,6,78,91,35,23};
int size=sizeof(array)/sizeof(array[0]);


selection_sort(array,size);
print_array(array,size);
return 1;













}