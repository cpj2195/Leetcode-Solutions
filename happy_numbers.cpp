#include"essentials.cpp"

bool isHappy(int n) {
        map<int,int>mp1;
        if(n==1){
            return true;
        }
        if(n==10){
            return true;
        }
        
        while(n!=1){
            
            int number=n;
            int sum=0;
            while(number!=0){
                int digit=number%10;
                digit=digit*digit;
                number=number/10;
                sum=sum+digit;
                
                cout<<"number is "<<number<<endl;
                
            }
            cout<<"sum is "<<sum<<endl;
            n=sum;
            cout<<"n is "<<n<<endl;
            mp1[n]++;
            if(mp1[n]>1){
                return false;
            }
            
            
           
            
        }
        if(n==1){
            return true;
        }
        
        else{
            return false;
        }
        
    }

int main(){

int num=19;
cout<<isHappy(19)<<endl;
return 1;



}