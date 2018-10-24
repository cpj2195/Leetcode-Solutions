#include"essentials.cpp"







int get_kth_smallest(vector<int>v1,int start,int end,int k){


if(start<=0 || start>v1.size()){
    return INT_MAX;
}
else if(end<=0 || end>v1.size()){
    return INT_MAX;
}
int count=0;
priority_queue<int>pq;
for(int i=start-1;i<start-1+k;i++){
    pq.push(v1[i]);

}
print_maxheap(pq);

for(int i=start-1+k;i<end;i++){

if(v1[i]<pq.top()){
    pq.pop();
    pq.push(v1[i]);
}


}


return(pq.top());



}






int main(){

vector<int>v1;
v1.push_back(3);
v1.push_back(2);
v1.push_back(1);
v1.push_back(5);
v1.push_back(8);
v1.push_back(9);
int start=1;
int end=6;
int k=4;
cout<<get_kth_smallest(v1,start,end,k)<<endl;
return 1;




}
