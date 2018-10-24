#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int array[]={2,3,5,7,1,8,6,3};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+array[i];
    }
    int index;
    int left_sum=0;
    int right_sum;
    for(int i=0;i<size;i++){
        sum=sum-array[i];

        if(sum==left_sum){
            cout<<array[i]<<endl;
            return 1;
        
        }
        else{
            left_sum=left_sum+array[i];
        }

    }
    return -1;
}