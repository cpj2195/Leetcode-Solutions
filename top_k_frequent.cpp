#include"essentials.cpp"

bool my_compare(pair<int,int>p1,pair<int,int>p2)
{

if(p1.second==p2.second){
    return (p1.first>p2.first);
}

else{
    return (p1.second>p2.second);
}

}


void topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp1;
        
        // vector<int>v1;
        for(auto it:nums){
            mp1[it]++;
        }
        vector<pair<int,int> >v2;
        for(auto it:mp1){
            v2.push_back(make_pair(it.first,it.second));
        }

        sort(v2.begin(),v2.end(),my_compare);
        for(int i=0;i<k;i++){
            cout<<v2[i].first<<endl;
        }
    
       
        return ;
    }


int main(){
vector<int>v1;
v1.push_back(3);
v1.push_back(1);
v1.push_back(4);
v1.push_back(4);
v1.push_back(5);
v1.push_back(2);
v1.push_back(6);
v1.push_back(1);
int k=2;
topKFrequent(v1,k);



// print_vector(v2);
return 1;







}