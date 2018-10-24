#include"essentials.cpp"



void add_element(priority_queue<int, vector<int>, greater<int> >& greaters,priority_queue<int>& smallers,int number){


if(smallers.size()==0 || number<smallers.top()){
    smallers.push(number);

}
else{
    greaters.push(number);
}



}

void adjust_queues(priority_queue<int, vector<int>, greater<int> >& greaters,priority_queue<int>& smallers){


int smaller_heap=1;
int greater_heap=0;


if(smallers.size()<greaters.size()){
smaller_heap=0;
greater_heap=1;


}



if(smaller_heap && !greater_heap){
    if(smallers.size()-greaters.size()>=2){
        greaters.push(smallers.top());
        smallers.pop();
    }


}
else{

if(greaters.size()-smallers.size()>=2){

smallers.push(greaters.top());
greaters.pop();

}

}


}



float calculate_median(priority_queue<int, vector<int>, greater<int> >& greaters,priority_queue<int>& smallers){


int smaller_heap=1;
int greater_heap=0;


if(smallers.size()<greaters.size()){
smaller_heap=0;
greater_heap=1;


}
if(smallers.size()==greaters.size()){

return(float((smallers.top()+greaters.top()))/2.0);

}

else if(smaller_heap and !greater_heap){
    return smallers.top();
}
else{
    return greaters.top();
}



}








void get_median(int array[],int size){

priority_queue<int>smallers;
priority_queue<int, vector<int>, greater<int> >greaters;


for(int i=0;i<size;i++){


int element=array[i];
add_element(greaters,smallers,element);
adjust_queues(greaters,smallers);
float x=calculate_median(greaters,smallers);
cout<<x<<endl;






}




}







int main(){

int array[]={5,15,10,20,3};
int size=sizeof(array)/sizeof(array[0]);
get_median(array,size);
return 1;







    
}