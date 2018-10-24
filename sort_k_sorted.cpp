#include"essentials.cpp"




// priority_queue<int>pq;
int main(){



int array[] = {2,6,3,12,56,8};
int k=3;
int size=sizeof(array)/sizeof(array[0]);
priority_queue<int,vector<int>,greater<int> >pq;
for(int i=0;i<k+1;i++){
    pq.push(array[i]);
}
vector<int>v1;
int index=0;
for(int i=k+1;i<size;i++){

int x=pq.top();
// array[i]=pq.top();
pq.pop();

v1.push_back(x);
pq.push(array[i]);

}

while(!pq.empty()){
    v1.push_back(pq.top());
    pq.pop();
}

print_vector(v1);
return 1;



}