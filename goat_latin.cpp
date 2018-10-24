#include"essentials.cpp"

void append_a_times(string &word,int a){
    while(a>=0){
        word+='a';
        a--;
    }

}

string toGoatLatin(string S) {
        vector<string>v1;
        // string hello="hi";
        for(int i=0;i<S.length();i++){
            string word="";
            while(i<S.length() && isalpha(S[i])){
                // cout<<S[i]<<endl;
                word.push_back(S[i]);
                i++;
            }
            // cout<<word<<" "<<i<<endl;
            v1.push_back(word);
            
        } 
        for(auto it=0;it<v1.size();it++){
            string hello1=v1[it];
            int j=0;
            
                if(j==0){
                if(hello1[j]=='a' ||hello1[j]=='e' || hello1[j]=='i' || hello1[j]=='o' || hello1[j]=='u' || hello1[j]=='A' ||  hello1[j]=='E' || hello1[j]=='I' || hello1[j]=='O' || hello1[j]=='U' )
                {
                    hello1+="ma";

                }
                else {
                    char c=hello1[0];
                    hello1.erase(0,1);
                    hello1+=c;
                    hello1+="ma";
                }
                }
                append_a_times(hello1,it);
                v1[it]=hello1;


            

        }
        string hello="";
        for(auto it=0;it<v1.size();it++){
            hello+=v1[it];
            if(it!=v1.size()-1){
                hello+=' ';
            }
        }


        
        return hello;
        
    }

int main(){

string test="I speak Goat Latin";
string hey="";
hey+=toGoatLatin(test);
cout<<hey<<endl;
return 1;


}