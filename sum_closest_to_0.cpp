#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void sum(int array[],int size){

int low=0;
int high=size-1;
int positive_closest=INT_MAX,negative_closest=INT_MIN;
int temp;
while(low<high){
    temp=array[low]+array[high];


    if(temp>0){
        if(temp<positive_closest){
            positive_closest=temp;
            high--;
        }}
    else if(temp<0){

        if(temp>negative_closest){
            negative_closest=temp;
            low++;
        }}
    else
    break;
   
    
    }

cout<<temp<<endl;


}





int main(){

    int array[]={-1,-3,-2,5,-4,2};
    int size=sizeof(array)/sizeof(array[0]);
    sort(array,array+size);
    sum(array,size);
       return 1;
}