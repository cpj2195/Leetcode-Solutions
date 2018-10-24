#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void swap(int*a, int*b){

    int temp=*a;
    *a=*b;
    *b=temp;
}


void dnf_algo(int array[],int size){

int low=0;
int mid=0;
int high=size-1;
while(mid<=high){

if(array[mid]==0){
    swap(&array[low],&array[mid]);
    low++;
    mid++;
}
else if(array[mid]==1){
    mid++;
}
else{
    swap(&array[mid],&array[high]);
    high--;
}


}




}

int main(){

    int array[]={0,1,1,1,2,2,2,1,0,0,0,1,2,0};
    int size=sizeof(array)/sizeof(array[0]);
    dnf_algo(array,size);
    // sort(array,array+size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
       return 1;
}