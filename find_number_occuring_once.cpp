#include<algorithm>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void find_twice(int array[],int m){
    

int xor1=0;
for(int i=0;i<m;i++){
    xor1=xor1^array[i];
}
cout<<xor1<<endl;


}

int main(){
     int array[]={6,6,7,7,1,1,3,3,5};
    int size=sizeof(array)/sizeof(array[0]);
    find_twice(array,size);
    return 1;
}