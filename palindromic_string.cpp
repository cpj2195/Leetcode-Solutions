#include "essentials.cpp"




bool palindrome(string exp){
    int i=0;
    int j= exp.length()-1;
    while(i<j){
        if(exp[i++]==exp[j--]){
            
        }
        else 
        {
            return false;
            
        }
    }
return true;
}
int main(){




    string s="hannah";
    string t="abcbac";
    if(palindrome(t)){
        cout<<" It's a Palindrome"<<endl;

    }
    else{
        cout<<"nopes it isnt a palindrome"<<endl;


    }

    return 1;
}