#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;


int find_element(int array[],int key,int low,int high){
    if(low>high)
    return -1;

    
    int m=low+(high-low)/2;
    if(array[m]==key)
    return m;
    if(array[high]>=array[m]){
    if (key>=array[m] && key<=array[high])
        return find_element(array,key,m+1,high);
    else
    return find_element(array,key,low,m-1);
    }
    else if(array[m]>=array[low]){

        if(key>=array[low] && key<=array[m])
        return find_element(array,key,low,m-1);
        else
        return find_element(array,key,m+1,high);

    }
        

    
}


int main(){

    int array[]={9,10,11,12,13,15,18,3,5,6,8};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<find_element(array,8,0,size-1);
    return 1;

}