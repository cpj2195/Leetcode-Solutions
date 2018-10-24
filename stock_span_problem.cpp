#include "essentials.cpp"





void stock_span(int array[], int size){

int*stock=(int*)malloc(sizeof(int)*(size));
stock[0]=1;


for(int i=1;i<size;i++){
    stock[i]=1;
    for(int j=i-1;j>=0 && array[i]>=array[j];j--){
        stock[i]++;
    }
}

for(int k=0;k<size;k++){
    cout<<stock[k]<<"  ";
}

}


int main(){



    int array[]={2,9,10,100,23,78,34,49,20,14};
    int size=sizeof(array)/sizeof(array[0]);
    stock_span(array,size);
    return 1;
}