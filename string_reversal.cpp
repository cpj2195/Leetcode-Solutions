#include"essentials.cpp"


void reverse_string(string &s){


    int i=0;
    int j=s.length()-1;
    
    while(i<j){
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
        i++;
        j--;
    }
}


int main(){
string s="abcABC123";
cout<<s<<endl;
reverse_string(s);
cout<<s<<endl;
}