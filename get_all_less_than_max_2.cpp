#include"essentials.cpp"

int get_max(int a,int b){
    return max(a,b);
}


void get_2_less(int array[],int size){
int max=array[0];
int second_max=array[1];
for(int i=2;i<size;i++){

int max=get_max(array[i],second_max);
int second_max =get_max(max,)



cout<<max<<" "<<second_max<<endl;



}

int main(){



    int array1[]={24,35,16,89,90,66};
    int size=sizeof(array1)/sizeof(array1[0]);
    get_2_less(array1,size);
}