#include"essentials.cpp"

int findLUSlength(string a, string b) {
        string result="";
        if(a.length()==0 && b.length()!=0)
        {
            return b.length();
        }        
        else if(a.length()!=0 && b.length()==0){
            return a.length();
        }
        else if(a.length()==0 &&b.length()==0){
            return -1;
        }
        else if(a==b){
            return -1;
            
        }
        else{
            
            return max(a.length(),b.length());
                
            }
            
        
        
        return result.length();
        
        
        
    }



int main(){
string a="aefawfawfawfaw";
string b="aefawfeawfwafwaef";






}