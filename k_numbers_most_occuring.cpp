#include"essentials.cpp"


bool my_comparator(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second==p2.second){
        return (p1.first>p2.first);
    }
    else {
        return p1.second>p2.second;
    }



}


void most_occuring(int array[],int size){


int k=2;
map<int,int>mp1;

for(int i=0;i<size;i++){

mp1[array[i]]++;

}


vector<pair<int,int> >v1;
for(auto it:mp1){

v1.push_back(it);

}

for(auto it:v1){
    cout<<it.first<<" "<<it.second<<endl;
}
cout<<endl<<endl;
// print_array(array,size);

sort(v1.begin(),v1.end(),my_comparator);
for(auto it:v1){
    cout<<it.first<<" "<<it.second<<endl;
}

for(int i=0;i<k;i++){

cout<<v1[i].first<<" "<<v1[i].second<<endl;


}








}






int main(){


int array[]={3, 1, 4, 4, 5, 2, 6, 1};
int size1=sizeof(array)/sizeof(array[0]);
most_occuring(array,size1);




return 1;




}