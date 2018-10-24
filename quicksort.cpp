#include"essentials.cpp"




int partition(int array[],int low,int high){

    int pivot=array[high];
    int pi=low;
    for(int i=low;i<=high;i++){
        if(array[i]<pivot){
            swap(&array[i],&array[pi]);
            pi=pi+1;
        }
    }
    swap(&array[pi],&pivot);
        return pi;
}


void quicksort(int array[],int low,int high){
if(low<high){
    int pi=partition(array,low,high);
    // cout<<pi<<endl;
    quicksort(array,low,pi-1);
    quicksort(array,pi+1,high);
}



}

int main(){



    int array[]={3,5,12,1,2,5,8,3,122,12,18};
    int size=sizeof(array)/sizeof(array[0]);
    int low=0;
    int high=size-1;
    quicksort(array,low,high);
    print_array(array,size);
    return 1;
}