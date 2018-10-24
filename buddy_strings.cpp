#include"essentials.cpp"



void swap_char(char &a, char &b){
        char temp=a;
        a=b;
        b=temp;
    }
bool buddyStrings(string A, string B) {
        string A1(A);
        // cout<<A1<<endl;
        if(A.length()!=B.length()){
            return false;
        }
        if(A.length()==0 || B.length()==0 ){
            return false;
        }
        for(int i=0;i<A.length()-1;i++){
            for(int j=i+1;j<A.length();j++){
                swap_char(A[i],A[j]);
                if(A==B){
                    return true;
                }
                A=A1;
            }
        }
        return false;
    }

int main(){
    string A="abcaa";
    string B="abcbb";
    cout<<buddyStrings(A,B);
    return 1;
}