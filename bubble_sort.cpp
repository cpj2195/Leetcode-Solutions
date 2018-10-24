#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int swap(int *a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


void bubble_sort(int array[],int size){


for (int i=0;i<size;i++){
    bool swapped=false;
    for (int j=0;j<size;j++){
        if(array[j]>array[i]){
            swap(&array[j],&array[i]);
            swapped=true;
        }
    }

    if(swapped==false)
    break;
}


}

int main(){
    int array1[]={1,8,11,2,1,3,90,15,55,56,79,78,112,1,32,344,156};
    int size=sizeof(array1)/sizeof(array1[0]);
    bubble_sort(array1,size);
for(int i=0;i<size;i++){
    cout<<array1[i]<<endl;
}
}