#include<bits/stdc++.h>
#include<iostream>
using namespace std;




int main(){

int array[]={1,2,3,1,1,3,4,5};
int size=sizeof(array)/sizeof(array[0]);
sort(array,array+size);

int majority_index=0;
int count=1;
int element;
int max_count=1;

for(int i=1;i<size;i++){
    if(array[i]==array[i+1])
    {        count++;
    
    if(count>max_count)
    {
        max_count=count;
        majority_index=i;     
    }


    }
    

}
cout<<count<<endl;
// cout<<majority_index<<endl;
    return 1;

}