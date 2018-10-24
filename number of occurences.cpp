#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binary_search(int array[],int size,int low, int high,int key){
int first;
    if(low>=high){
        return -1;
    }
    while(low<=high){
    int m=low+(high-low)/2;
    if(key>array[m]){
        low=m+1;
        

    }
    else if(key<array[m]){
       
        high=m-1;

    }
    else{
        first=m;
        high=m-1;
    }
    }
return first;
}
int binary_search1(int array[],int size,int low, int high,int key){
int first;
    if(low>=high){
        return -1;
    }
    while(low<=high){
    int m=low+(high-low)/2;
    if(key>array[m]){
        low=m+1;
        

    }
    else if(key<array[m]){
       
        high=m-1;

    }
    else{
        first=m;
        low=m+1;
    }
    }
return first;
}
int main(){
    int array[]={1,4,4,4,5,5,5,5,5,5,5,5,5};
    int size1=sizeof(array)/sizeof(array[0]);
    printf("%d\n",size1);
    int f,f1;

    
    f=binary_search(array,size1,0,size1-1,5);
    f1=binary_search1(array,size1,0,size1-1,5);
    printf("%d",f1-f+1);
    return 0;

}


