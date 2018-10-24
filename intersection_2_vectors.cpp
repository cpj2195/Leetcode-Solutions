#include"essentials.cpp"
 vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        map<int,int>mp2;
        vector<int>v1;
        // print_vector(nums1);
        for(auto it:nums1){
            mp1[it]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(mp1[nums2[i]]>0){
                mp1[nums2[i]]--;
                v1.push_back(nums2[i]);
            }

        }
            
            
        
        return v1;
    }



int main(){

vector<int>v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(2);
v1.push_back(1);

// print_vector(v1);
vector<int>v2;
v2.push_back(2);
v2.push_back(2);
// v1.push_back(1);

vector<int>v3=intersect(v1,v2);
print_vector(v3);



return 1;

}