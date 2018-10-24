#include"essentials.cpp"

void get_3sum(int array[],int size,int number){

std::sort(array,array+size);

for(int i=0;i<size-1;i++){

    
       int k=i+1;
       int end=size-1;
       while(k<end){
       if(array[i]+array[end]+array[k]==number){
           cout<<array[i]<<" "<<array[end]<<" "<<array[k];
           return;

       }
       else if(array[i]+array[end]+array[k]<number){
        //    cout<<array[i]<<" "<<array[j]<<" "<<array[k];
           k++;
       }
       else{
        //    cout<<array[i]<<" "<<array[j]<<" "<<array[k];
           end--;
       }
       }


    

}


}


void sorted_merge(int array[],int low,int mid, int high){

int array1[mid-low+1];
int array2[high-mid];

int k=low;
for(int i=low;i<(mid-low+1);i++){
    array1[i++]=array[]
}






}




void merge_sort(int array[],int low, int high){

if(low<=high){


int mid=low+(high-low)/2;

merge_sort(array,low,mid-1);
merge_sort(array,mid+1,high);
sorted_merge(array,low,mid,high);






}


}








int main(){
int array[]={1,4,2,64,10,2,32,78,20};

int size=sizeof(array)/sizeof(array[0]);
get_3sum(array,size,37);

// cout<<size<<endl;
return 1;





}
