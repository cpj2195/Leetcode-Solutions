#include"essentials.cpp"




bool wordPattern(string pattern, string str) {
        
        map<char,string>mp1;
        vector<string>v1;
        for(int i=0;i<str.length();i++){
            string test="";
            while(isalpha(str[i])){
                test+=str[i];
                i++;
                
            }
            v1.push_back(test);
                
            
        }
        cout<<pattern.length()<<" "<<v1.size()<<endl;
        if(pattern.length()!=v1.size()){
            return false;
        }
        print_vector(v1);
        mp1[pattern[0]]=v1[0];
        
        for(int j=1;j<pattern.length();j++){
            if(mp1.find(pattern[j])!=mp1.end()){
                if(mp1[pattern[j]]!=v1[j]){
                    return false;
                }
                // cout<<"hello"<<endl;
            }
            else{
                mp1[pattern[j]]=v1[j];
            }
                
            
        }
        return true;
        
        
        
    }



int main(){

string pattern = "abba";
string  str = "dog cat cat dog";

cout<<wordPattern(pattern,str)<<endl;
return 1;


}