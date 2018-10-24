#include"essentials.cpp"
#include<math.h>



class MinHeap{


int capacity;




public:
int *array;
int current_size;
MinHeap(int number);
int parent(int index);
int left_child(int index);
int right_child(int index);

int get_min();
void increase_array_size();

void insert_key(int k);

void extract_min();
void heapify_down(int index);
void heapify_up(int index);
void swap(int *x, int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int get_lindex(int index){
    if(index>=0 && index<current_size){
        return 2*index+1;
    }
}
int get_rindex(int index){
    if(index>=0 && index<current_size){
        return 2*index+2;
    }
}

int get_parentindex(int index){

    if(index>=0 && index<current_size){
        return ceil((index-1)/2);
    }
}



};


MinHeap::MinHeap(int number){
capacity=number;
current_size=0;
array=new int[capacity];


}

void MinHeap::heapify_down(int index){

// int index=0;
int lindex=2*index+1;
int rindex=2*index+2;


    int smallerchildindex=index;
    if(lindex<current_size && array[lindex]<array[index]){
        smallerchildindex=lindex;
    }
    if(rindex<current_size && array[rindex]<array[smallerchildindex]){
        smallerchildindex=rindex;
    }
    if(smallerchildindex!=index){
        int temp=array[smallerchildindex];
        array[smallerchildindex]=array[index];
        array[index]=temp;
    // swap(&array[smallerchildindex],&array[index]);
    // index=smallerchildindex;
    heapify_down(smallerchildindex);    


}

}



int MinHeap::parent(int index){


return array[(index-1)/2];


}

int MinHeap::left_child(int index){


return array[2*index+1];

}


int MinHeap::right_child(int index){


    return array[2*index+2];
}



int MinHeap::get_min(){
    if(current_size==0){
        return INT_MAX;
    }
    return array[0];
}


void MinHeap::increase_array_size(){

if(capacity==current_size){
    int*array_old=array;
    int *array=new int[2*capacity];
    for(int i=0;i<capacity;i++){
        array[i]=array_old[i];
    }
    capacity=2*capacity;
    free(array_old);

}

}


void MinHeap::extract_min(){

    if(current_size==0){
        return ;
    }
    else{

        // int item=array[0];
        array[0]=array[current_size-1];
        current_size--;
        heapify_down(0);
        return;

    }
}
void MinHeap::insert_key(int k){

if(current_size==capacity){
    increase_array_size();
}
array[current_size]=k;
current_size++;
heapify_up(current_size-1);


}




void MinHeap::heapify_up(int index){

int pindex=(index-1)/2;
if(array[pindex]>array[index]){
    int temp=array[pindex];
    array[pindex]=array[index];
    array[index]=temp;
    heapify_up(pindex);
}


}


void sort_nearly_sorted(int *array, int size){

for(int i=1;i<size;i++){

int j=i-1;
int key=array[i];
while(j>=0 && array[j]>key){
    array[j+1]=array[j];
    j=j-1;

}
array[j+1]=key;
}

}


void sort_nearly_K_sorted(int *array,int size, int k){


MinHeap mh2(k+1);
for(int i=0;i<k+1;i++)
{
    mh2.insert_key(array[i]);
}

// cout<<mh2.current_size()<<endl;
int i=0;
for(int j=k+1;j<size;j++){
    
    array[i++]=mh2.get_min();
    mh2.extract_min();
    mh2.insert_key(array[j]);
    


}



return ;



}

void kth_largest_stream(int k){


MinHeap mh(k);
while(1){

int element;
cout<<"Enter an element "<<endl;
cout<<"current size is  "<<mh.current_size<<endl;
cin>>element;

if(mh.current_size<k)
{mh.insert_key(element);}

else if(element>mh.get_min()){
    mh.extract_min();

    cout<<"hi  "<<mh.current_size<<endl;
    mh.insert_key(element);
    cout<<"hi111  "<<mh.get_min()<<endl;
}


cout<<"Kth largest element is "<<mh.get_min()<<endl;



}








}

















int main(){

MinHeap mh(10);

mh.insert_key(10);


mh.insert_key(11);

mh.insert_key(14);

mh.insert_key(3);

mh.insert_key(31);
mh.insert_key(7);
mh.insert_key(1);


// int array1[]={1,91,122,100,4,134,8,17,16};
// int size=sizeof(array1)/sizeof(array1[0]);

// cout<<endl;
// MinHeap mh1(size);
// for(int i=size-1;i>=0;i-- ){

//     // cout<<array1[i]<<endl;
//     mh1.insert_key(array1[i]);
// }
// int k=3;

// sort_nearly_K_sorted(array1,size,k);
// // for(int i=0;i<size;i++){    
// //        array1[i] =mh1.get_min();
// //     mh1.extract_min();
// // }
// print_array(array1,size);
// // sort_nearly_sorted(array1,size);
// print_array(array1,size);

set<int>s1;
s1.insert(2);
s1.insert(12);
s1.insert(22);
s1.insert(34);
s1.insert(1);
for(auto it:s1){
    cout<<it<<" ";
    // cout<<*it<<" "
}
// for(auto it:s1.begin();it!=s1.end();it++){
//     cout<<*it<<" ";
// }
// set<int>::iterator it;
if(s1.count(2)){
    cout<<"its there"<<endl;
}
// kth_largest_stream(3);

return 1;


    
}





