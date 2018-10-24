#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int main(){
    int array[]={12,4,5,8,4,43,14,99};
    int size=sizeof(array)/sizeof(array[0]);
    int max_diff=array[1]-array[0];
    int element=array[0];
    // for(int i=1;i<size;i++ ){
    //     if(array[i]-element>max_diff){
    //         max_diff=array[i]-element;

    //     }
    //     if(array[i]<element){
    //         element=array[i];
    //     }
    // }


    for(int i=0;i<size-1;i++){
        for(int j=1;j<size;j++){
            if(array[j]-array[i]>max_diff){
                max_diff=array[j]-array[i];
            }
        }
    }

    cout<<max_diff<<endl;
    
    
}