#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
#include"essentials.cpp"
using namespace std;




float ceiling(float array[],float key,int low, int high){


int med=low+(high-low)/2;

if(array[med]==key){

    return array[med+1];}


else if(key>array[high]){
    return -1;

}
else if(key<array[low]){
    return array[low];
}
else if(key>array[med]){
if(med+1<=high && key<array[med+1]){
    return array[med+1];}
else
return ceiling(array,key,med+1,high);
}

else {
    cout<<"hi"<<endl;
    if(med-1>=low && key>array[med-1]){
        return array[med];
    }
    else{
        return ceiling(array,key,low,med-1);
    }
}

}






int main(){
    // int array[]={1,4,5,6,3,9};
    float array[]={1.1,2.3,4.5,5.6,5.7,6.7};
    int size=sizeof(array)/sizeof(array[0]);
    // print_array(array,size);
int low=0;
int high=size-1;


    cout<<ceiling(array,1.1,low,high)<<endl;
    return 1;
    
}

