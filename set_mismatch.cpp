#include"essentials.cpp"


vector<int> findErrorNums(vector<int>& nums) {
        
        vector<int>my_vector;
        int sum=0;
        int x;
        int size=nums.size();
        int correct_sum=size*(size+1);
        correct_sum=correct_sum/2;
        cout<<correct_sum<<endl;
        if(size==0){
            return my_vector;
        }
        // for(vector<int>::iterator it=nums.begin();it!=nums.end();++it){
            
        //     sum=sum+(*it);
            
        // }
        // cout<<sum<<endl;
        
for(auto it=nums.begin();it!=prev(nums.end());it++){
for(auto it1=next(it);it1!=nums.end();it1++){
    if(((*it)^(*it1))==0){
        cout<<*it<<" "<<*it1<<endl;
        x=*it;
        break;
    }

    
}
sum=sum+*it;
}
sum=sum+nums.back();
// cout<<x<<endl;
// cout<<nums.back()<<endl;
        my_vector.push_back(x);
        my_vector.push_back(correct_sum-sum+x);
        return my_vector;
    }

void print_vector(vector<int>v){

for(auto it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
}

}


int main(){
// int array[]={2,3,2};
std::vector<int>v3;
// for(auto it=v3.begin();it!=v3.end();it++){
//     v3.push_back(1,)
// }
v3.push_back(2);
v3.push_back(3);
v3.push_back(2);
// v3.push_back(4);

// int size=sizeof(array)/sizeof(array[0]);
std::vector<int>v2;
v2=findErrorNums(v3);
print_vector(v2);
// int *array1=get_missing(array,size);
return 0;

}