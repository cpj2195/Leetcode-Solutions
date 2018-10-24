#include<algorithm>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;






void separate_oddeven(int array[], int size){
    int i=0;
    int j=size-1;
    
    int *array1=(int*)malloc(sizeof(int)*size);


   while(i<j){
while(i<j && array[i]%2==0){
    i++;
}
while(i<j && array[j]%2==1){
    j--;
}
if(i<j){

    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
    i++;
    j--;
}}



    
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

}



int main(){


    int array[]={2,4,3,1,6,8,5};
    int size=sizeof(array)/sizeof(array[0]);
    separate_oddeven(array,size);
    return 1;
}