#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void sorted_merge(int arr[], int l, int m ,int r){

int arr1[m-l+1];
int arr2[r-m];

for (int i=0;i<m-l+1;i++){
    arr1[i]=arr[i+l];
}
for (int j=0;j<r-m;j++){
    arr2[j]=arr[j+m+1];
}

int i=0,j=0,k;
k=l;
while(i<m-l+1 and j<r-m)
{
if(arr1[i]<=arr2[j]){
    arr[k++]=arr1[i++];
}
else if(arr1[i]>arr2[j]){
    arr[k++]=arr2[j++];
}
}

while(i<m-l+1){
    arr[k++]=arr1[i++];
}
while(j<r-m){
    arr[k++]=arr2[j++];
}

}


void merge_sort(int arr[],int l,int h){
    if(l<h){
        int m=l+(h-l)/2;
        merge_sort(arr,l,m-1);
        merge_sort(arr,m+1,h);
        sorted_merge(arr,l,m,h);
       

    }

}

int main(){
    int array[]={5,7,8,13,19,1,2,3,6};
    int size1=sizeof(array)/sizeof(array[0]);
     for(int i=0;i<size1;i++){
        cout<<array[i]<<endl;
    }
    merge_sort(array,0,size1-1);
     for(int i=0;i<size1;i++){
        cout<<array[i]<<endl;
    }
    return 1;
}