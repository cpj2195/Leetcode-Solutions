#include"essentials.cpp"


void max_heapify(int array[],int index,int size){

// array[0]=123;

int l=2*index+1;
int r=2*index+2;
int largest=index;

if(l<size && array[l]>array[largest]){
    largest=l;
}

if(r<size && array[r]>array[largest]){
    largest=r;
}
if(largest!=index){
    swap(array[largest],array[index]);
    max_heapify(array,largest,size);

}



}






void convert_min_to_max(int array[],int size){


// here we are getting the first non-leaf node from the bottom and iterating upwards and heapifying them

for(int i=(size-2)/2;i>=0;i--){
max_heapify(array,i,size);


}











}









int main(){


int array[]={3,5,9,6,8,20,10,12,18,9};
int size=sizeof(array)/sizeof(array[0]);


print_array(array,size);
convert_min_to_max(array,size);
print_array(array,size);
return 1;





}