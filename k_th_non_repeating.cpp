#include"essentials.cpp"
#include<unordered_map>




int main(){

int array[]={1, 2, 1, 3, 4, 2};
int k=2;
int size=sizeof(array)/sizeof(array[0]);
unordered_map<int,int>mp1;

for(int i=0;i<size;i++){

mp1[array[i]]++;
}


int count=0;

for(int i=0;i<size;i++){

if(mp1[array[i]]==1){
    count++;
}

if(count==k){
    cout<<array[i]<<endl;
    break;
}



}



cout<<mp1.size()<<endl;
// for(auto it:mp1){
//     cout<<it.first<<endl;
// }


// for(int i=0;i<size;i++){





// }
return 1;











}