#include"essentials.cpp"



bool checkRecord(string s) {
        
        map<char,int>record;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                record[s[i]]++;
            }
        }
        cout<<record['A']<<endl;
        // int count=0;
        
        
        if(s.length()>3){
        for(int i=0;i<s.length()-2;i++){
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
            {
                return false;
            }
            
        }
        }
        if (record['A']<=1){
            return true;
        }
        
        
        return false;
    }



int main(){


    string test="A";
    cout<<checkRecord(test)<<endl;
    return 1;
}