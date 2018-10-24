#include"essentials.cpp"

void moveZeroes(vector<int>& nums) {
        
    if(nums.size()==0 || nums.size()==1){
            return;
        }
        
    for(int i=0;i<nums.size()-1;i++){
        
        
        if(nums[i]==0 && nums[i+1]!=0){
            int temp=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=temp;
            
            
        }
       
        else if(nums[i]==0  && nums[i+1]==0){
            int j=i;
            while(nums[j]==0 && j<nums.size()){
                j++;
            }
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        
            
            
            
            
        }
        
        
        
        
    }
        
        
        
        
        
    }


int main(){


// int nums[]={4,2,4,0,0,3,0,5,1,0};
vector<int>nums;
nums.push_back(4);
nums.push_back(2);
nums.push_back(4);
nums.push_back(0);
nums.push_back(0);
nums.push_back(3);
nums.push_back(0);
nums.push_back(5);
nums.push_back(1);
nums.push_back(0);

print_vector(nums);
moveZeroes(nums);
print_vector(nums);
return 1;






}