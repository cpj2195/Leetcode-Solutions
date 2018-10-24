#include"essentials.cpp"



int get_kth_smallest(vector<int>v1,int k){

priority_queue<int>pq;
for(int i=0;i<k;i++){
    pq.push(v1[i]);
}

for(int i=k;i<v1.size();i++)
{
if(v1[i]<pq.top()){
    pq.pop();
    pq.push(v1[i]);
}





}
return pq.top();





}




int main(){

vector<int>v1;
v1.push_back(7);
v1.push_back(10);
v1.push_back(4);
v1.push_back(3);
v1.push_back(20);
v1.push_back(15);
int k=4;
cout<<get_kth_smallest(v1,k)<<endl;
return 1;




}