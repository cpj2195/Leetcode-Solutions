#include"essentials.cpp"


// char findTheDifference(string s, string t) {
//         char count[256];
        // char x='\0';
        // for(int i=0;i<s.length();i++){
        //     count[s[i]]++;
        // }
        // for(int j=0;j<t.length();j++){
        //     count[t[j]]--;
        //     if(count[t[j]]==-1){
        //         x=t[j];
        //         // cout<<x<<endl;
        //         // return x;
        //     }
            
        // }
        // return x;
        // char x='\0';
        // for(int i=0;i<s.length();i++){
        //     x=x^s[i];

        // }
        // for(int j=0;j<t.length();j++){
          
        //     x=x^t[j];
        // }
        // return x;
        int lengthOfLastWord(string s) {
        int count=0;
        string c=" "; 
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    } 
    

int main(){

string s="hello world";
string t="abc";
cout<<lengthOfLastWord(s)<<endl;
return 1;



}