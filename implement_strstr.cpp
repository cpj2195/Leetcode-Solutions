#include"essentials.cpp"

int strStr(string haystack, string needle) {
        if(needle.length()==0){
            return 0;
        }
        else if(haystack.length()==0){
            return -1;
        }
        else{
            
            int j=0;
            
            int i=0;
            int start=0;
            while(i<haystack.length() && j<needle.length()){
                if(haystack[i]==needle[j]){
                    
                    // i++;
                    j++;
                    if(start==0){
                        start=i;
                    }
                    i++;
                    
                    
                }
                else if(start!=0){
                    start=0;
                    j=0;
                }
                else{
                    // cout<<i<<endl;
                    i++;
                }
                // cout<<i<<" "<<j<<endl;
                if(j==needle.length()){
                return start;
            }
               
            }
            return -1;
            
           
            
        }
        
    }


int main(){

string haystack="hellothere";
string needle="oth";
cout<<strStr(haystack,needle)<<endl;
return 1;


}