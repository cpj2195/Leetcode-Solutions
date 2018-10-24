#include"essentials.cpp"



void reverse_k(queue<int>&q,int k){
    cout<<"queue's size is"<<q.size()<<endl;

int size_q=q.size();
int array1[size_q];

    for(int i=0;i<size_q;i++){
        array1[i]=q.front();
        q.pop();
    }

    
int size=sizeof(array1)/sizeof(array1[0]);
cout<<"New array's size"<< size<<endl;
print_array(array1, size);
cout<<"\n"<<endl;
print_queue(q);
reverse(array1,array1+k);

print_array(array1,size);
for(int i=0;i<size;i++){
    q.push(array1[i]);
}
print_queue(q);
return ;
}



// int main(){
//     queue<int> q;
//     int n;
//     cout<<"Enter the number of elements in the queue";
//     cin>>n;
//     int value;
//     for(int i=0;i<n;i++){

//         cin>>value;
//         q.push(value);


//     }
//     cout<<"Enter the number of elements you want to reverse"<<endl;
//     int k;
//     cin>>k;
//     print_queue(q);
//     cout<<"\n"<<endl;
//     reverse_k(q,k);
//      print_queue(q);
//     return 1;
// }

int main(){


    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(10);
    q.push(13);
    q.push(23);
    int k=3;
    reverse_k(q,k);
    return 1;
}