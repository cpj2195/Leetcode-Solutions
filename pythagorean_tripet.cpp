#include<algorithm>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


bool is_present(int array[],int size){

    for (int i=0;i<size;i++){
        array[i]=array[i]*array[i];
    }
    
    for(int i=size-1;i>1;i--)
    {
        int low=0;
    int high=i-1;
        while(low<high){
            if(array[low]+array[high]==array[i]){
                cout<<array[i]<<endl;
                cout<<array[low]<<endl;
                cout<<array[high]<<endl;

                return true;
            }
            
            else if (array[low]+array[high]>array[i]){
                high--;
            }
            else{
                low++;
            }
        }

    }
    return false;


}


int main(){


    int array[]={2,4,3,1,6,8,5};
    int size=sizeof(array)/sizeof(array[0]);
    sort(array,array+size);
    if(is_present(array,size)==true)
    cout<<"present"<<endl;
    else
    cout<<"not present"<<endl;
    return 1;
}