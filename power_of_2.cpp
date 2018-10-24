#include"essentials.cpp"

bool isPowerOfTwo(int num) {
        
        
         if(num<=0){
            return false;
        }
        if(num==1){
            return true;
        }
       long double result;
        result=log(num)/log(3);
        cout<<(double)result<<endl;
        cout<<ceil(result)<<endl;
        cout<<floor(result)<<endl;
        
        
        if((ceil(result) == result) && (floor(result)==result)){
            return true;
        }
            
            
            
        return false;
        
        
        
        
    }


int main(){
// int n=536870912;
int n=243;
cout<<isPowerOfTwo(n)<<endl;
return 1;





}