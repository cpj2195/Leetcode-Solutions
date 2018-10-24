#include "essentials.cpp"


void interleave_q(queue<int>&q){

int size=q.size();
int array[q.size()];
for(int i=0;i<size;i++){
array[i]=q.front();
q.pop();
}
int size1=sizeof(array)/sizeof(array[0]);

int i=0;
int j=size1/2;

for(i,j;i<j,j<size1;i++,j++){
    q.push(array[i]);
    q.push(array[j]);
}


}

int main(){
    

    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(12);
    q.push(22);
    q.push(23);
    interleave_q(q);
     print_queue(q);
    return 1;

}