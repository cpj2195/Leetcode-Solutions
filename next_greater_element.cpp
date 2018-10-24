#include "essentials.cpp"



void next_greater_element(int array[],int size){

stack<int>s;
for(int i=0;i<size;i++){
    int next_greater=-1;
    for(int j=i+1;j<size;j++){
        
        if(array[j]>array[i]){
            next_greater=array[j];
            
            break;
        }
    }
cout<<"next greater for  "<<array[i]<<" is "<< next_greater<<endl;
    

}


}





int main (){


int array[]={2,5,9,21,12,15,3};
int size=sizeof(array)/sizeof(array[0]);
next_greater_element(array,size);
return 1;




}

