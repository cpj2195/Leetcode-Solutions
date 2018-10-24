#include "essentials.cpp"
 

struct Interval
{
    int start, end;
};
 


bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}


void mergeIntervals(Interval array[],int n){

stack<Interval>s;

sort(array,array+n,compareInterval);
s.push(array[0]);
for(int i=1;i<n;i++){


    if(array[i].start>s.top().end){
        s.push(array[i]);
    }
    else if(array[i].end>s.top().end){
        Interval temp=s.top();
        s.pop();
        temp.end=array[i].end;
        s.push(temp);

    }
}

while(!s.empty()){
cout<<s.top().start<<" "<<s.top().end;
s.pop();
}


}



int main(){
Interval arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeIntervals(arr, n);
    return 0;




}