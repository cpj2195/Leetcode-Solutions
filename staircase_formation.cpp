#include"essentials.cpp"
int arrangeCoins(int n) {
        
        unordered_map<int,int>mp1;
        if(n==1 || n==2){
            return 1;
        }
        
        
        
        for(int i=1;i<=n;i++){
            
            if(!mp1.count(i)){
                mp1[i]++;
            }
            else{
                break;
            }
            n=n-i;
            
            
            
        }
        return mp1.size();
        
        
        
        
        
        
    }



int main(){


int n=2147450880;
cout<<arrangeCoins(n)<<endl;
return 1;

}