#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binary_search(int array[],int size,int low, int high,int key)
{
    if(low>=high){
        return -1;
    }
    while(low<=high){
    int m=low+(high-low)/2;
    if(key==array[m]){
        return m;
    }
    if(array[m]>=array[low]){

     if(key>=array[low] && key<=array[m]){
        
        high=m-1;}

   
    else {
        low=m+1;

    }}
    else if( key>=array[m] && key<=array[high]){
        low=m+1;
    }
    else{
        high=m-1;
    }
    }

}

int main()
{
    int array[]={5,7,8,13,19,21,28,29,34,1,2,3,4,};
    int size1=sizeof(array)/sizeof(array[0]);
    int f;
    
    f=binary_search(array,size1,0,size1-1,19);
    printf("%d",f);
    return 0;

}