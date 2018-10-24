#include "essentials.cpp"




int main(){

deque<int>d;
// d.push_back(2);
// d.push_back(5);
// d.push_back(14);
// d.push_back(23);
// d.push_back(200);
d.push_front(2);
d.push_front(23);
d.push_front(26);
d.push_front(200);
while(!d.empty()){
    cout<<d.back()<<"   ";
    d.pop_front();
}



}