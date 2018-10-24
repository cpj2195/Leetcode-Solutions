#include"essentials.cpp"



void get_kth_largest(vector<int>v1,int k){



priority_queue<int, vector<int> ,greater<int> >pq;

for(int i=0;i<k;i++){

pq.push(v1[i]);
cout<<" "<<endl;

}
cout<<pq.top()<<endl;
for(int i=k;i<v1.size();i++)
{
if(v1[i]>pq.top())
{
    pq.pop();
    pq.push(v1[i]);

}
cout<<pq.top()<<" ";


}




}







int main(){
// int stream[] = {10, 20, 11, 70, 50, 40, 100, 5};
vector<int>v1;
v1.push_back(10);
v1.push_back(20);
v1.push_back(11);
v1.push_back(70);
v1.push_back(50);
v1.push_back(40);
v1.push_back(100);
v1.push_back(5);

// int size=sizeof(stream)/sizeof(stream[0]);
int k = 3;

get_kth_largest(v1,k);
return 1;




}