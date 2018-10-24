#include"essentials.cpp"


int get_freq(vector<int>v1,int low,int high){
         map<int,int>mp1;
        for(int i=low;i<=high;i++){
            cout<<v1[i]<<" ";
            mp1[v1[i]]++;
            
        }
        cout<<endl;
        // for(auto it:mp1){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        int element;
        int max_freq=0;
        for(auto it:mp1){
            
                // cout<<it.second<<" "<<max_freq<<endl;
                // max_freq=max(max_freq,it.second);
                if(it.second>max_freq){
                    max_freq=it.second;
                    element=it.first;
                }



            }

            // cout<<max_freq<<endl;

            return element;
        
        
        
        
    }


int findShortestSubArray(vector<int>& nums){

int element=get_freq(nums,0,nums.size()-1);


cout<<element<<endl;
int i=0;
int j=nums.size()-1;
while(i<j){

while(i<j && nums[i]!=element){
    i++;
}
while(i<j && nums[j]!=element){
    j--;
}

cout<<i<<" "<<j<<endl;

return 1;



}









}




int main(){


vector<int>nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(2);

nums.push_back(3);
nums.push_back(1);
// nums.push_back(4);
// nums.push_back(2);
int freq=get_freq(nums,0,nums.size()-1);

// cout<<freq<<endl;
int hello=findShortestSubArray(nums);

return 1;



}
