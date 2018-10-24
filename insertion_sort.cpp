#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

void insertion_sort(int array[],int size){
    for (int i=1;i<size;i++){
        int value=array[i];
        int hole=i;
        while(hole>0 && array[hole-1]>value){
            array[hole]=array[hole-1];
            hole--;
        }
        array[hole]=value;

    }


}


int main(){
int array1[]={1,8,11,2,1,12,13,14,17};
    int size=sizeof(array1)/sizeof(array1[0]);
    // sort(array1,array1+size);
    // reverse(array1,array1+size);
    insertion_sort(array1,size);
    for(int i=0;i<size;i++){
    cout<<array1[i]<<endl;
}
}
