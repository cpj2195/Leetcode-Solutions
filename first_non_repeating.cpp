#include "essentials.cpp"


string first_non_repeating(string test){

char *output=(char*)malloc(sizeof(char*)*256);
string hello="";
for(int i=0;i<test.length();i++){
    output[test[i]]++;

}

for(int i=0;i<test.length();i++){
    if(output[test[i]]==1){
       
        hello+=test[i];
        return hello;
        
    }
    

    

}
cout<<"No First Non repeating character"<<endl;


}
int firstUniqChar(string s) {
        char*count=new char[256];
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
        }
        // cout<<"hello"<<endl;
       
        for(int i=0;i<s.length();i++)
    {
        if(count[s[i]]==1){
            return i;
            
        }
    }
    return -1;}

int main(){



    string test="itwqbtcdprfsuprkrjkausiterybzncbmdvkgljxuekizvaivszowqtmrttiihervpncztuoljftlxybpgwnjb";
    string output1="";
    output1+=first_non_repeating(test);
    cout<<output1<<endl;
cout<<firstUniqChar(test)<<endl;
    return 1;
}