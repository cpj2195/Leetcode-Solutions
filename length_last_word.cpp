#include"essentials.cpp"



int lengthOfLastWord(string s) {
        int count=0;
        int j=s.length()-1;
        int a=s.length()-1;
        if(s[j]==' '){
            
            while(s[j]==' ' && j>=0){
                    j--;
            }
            
            while(s[j]!=' ' && j>=0){
                count++;
                j--;
            }

        }
        else if(s[a]!=' '){
            
            while(s[a]!=' ' && a>=0){
                count++;
                a--;

            }
            
        }
        return count;
    }

int main(){
    string hi="   day ";
    cout<<hi.length()<<endl;
    cout<<lengthOfLastWord(hi)<<endl;
    return 0;
    
}