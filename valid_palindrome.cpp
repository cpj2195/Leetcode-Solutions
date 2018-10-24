#include"essentials.cpp"
bool isPalindrome(string s) {
        string test="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                test+=tolower(s[i]);
            }
            if(isdigit(s[i])){
                test+=s[i];
            }
            
        }
        cout<<test<<endl;
        string test1(test);
        reverse(test.begin(),test.end());
        if(test==test1){
            return true;
        }else{
            return false;
        }
    }

int main(){


    string test="0P";
    cout<<isPalindrome(test)<<endl;
    return 1;
}