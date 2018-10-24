#include"essentials.cpp"

bool is_palindrome(string test){
       int low=0;
        int high=test.length()-1;
        while(low<high){
            if(test[low]==test[high]){
				// cout<<low<<" "<<high<<endl;
                low++;
                high--;
            }
			else{
				return false;
			}
            
        }
        return true;
        
    }
    
    bool validPalindrome(string s) {
        
        if(is_palindrome(s)){
            return true;
        }
        else
        {

            int i=0;
            int j=s.length()-1;
            while(i<j){
                if(s[i]==s[j]){
                    i++;
                    j--;
                    cout<<i<<" "<<j<<endl;
                }
                else{
                    break;
                }
            }
                cout<<i<<" "<<j<<endl;
                string s1(s);
                s.erase(s.begin()+i);
                if(is_palindrome(s)){
                    return true;
                }
                else{
                    s=s1;
                    s.erase(s.begin()+j);
                    if(is_palindrome(s)){
                        return true;
                    }
                    else{
                        return false;
                    }

                }


            
            return false;




        }
        
    }



int main(){
string test="abcdfedcba";
cout<<validPalindrome(test)<<endl;
return 1;





}