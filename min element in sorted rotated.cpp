#include<algorithm>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// 9,10,11,12,14,16,1,5,7,8
// 9,10,1,2,3
int min_element(int array[],int low,int high){
if(low>high)
return 0;

while(low<=high){
    int m=low+(high-low)/2;
    if( m+1<=high && array[m+1]<array[m]){
        return m+1;
    }
    else if( array[m-1]>array[m] && array[m]<array[m-1] ){
        return m;
    }
    
    if(array[m]>array[low]){
        return min_element(array,m+1,high);
    }
    else
    return min_element(array,low,m-1);
}

}

int main(){
    int array[]={90,100,12,13,14,23,29,45,65,77};
    int size=sizeof(array)/sizeof(array[0]);
    int low=0;
    int high=size-1;
    cout<<min_element(array,low,high)<<endl;
    return 1;
}