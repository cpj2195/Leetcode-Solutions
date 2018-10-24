#include"essentials.cpp"
string reverseVowels(string s) {
         int i=0;
        int high=s.length()-1;
        string test="";
        if(s==" "){
            return s;
        }
        while(i<high)
        {
            while(i<high && (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U')){  
                
                i++;
            }
             while(i<high && (s[high]!='a' && s[high]!='e' && s[high]!='i' && s[high]!= 'o'&& s[high]!='u' && s[high]!='A' && s[high]!='E' && s[high]!='I' && s[high]!='O' && s[high]!='U')){
               
                high--;
            }
            if(i<high){
                cout<<"hi"<<endl;
                char temp=s[i];
                s[i]=s[high];
                s[high]=temp;
                i++;
                high--;
                
            }
           
}

test+=s;
return test;

}


    



int main(){
    string test="aA";
    cout<<reverseVowels(test)<<endl;
    return 1;
}