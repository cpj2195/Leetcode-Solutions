#include "essentials.cpp"


bool is_stacksortable(int array[],int size){

stack<int>s;
int b_end=size-1;

cout<<b_end<<endl;
for (int i=0;i<size;i++){

if(s.empty()){
    
    s.push(array[i]);
}

else if(!s.empty())
{
    while(s.top()==b_end+1)
    {
    b_end--;
    s.pop();
    
    if(s.empty()){
        break;
    }

}
}
else if(!s.empty() && s.top()>array[i]){
    
s.push(array[i]);

}
else if(!s.empty() && s.top()<array[i]){
    
return false;

}

}


return true;
}




int main(){
    int array[]={2,3,1};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<is_stacksortable(array,size)<<endl;
    return 1;

}