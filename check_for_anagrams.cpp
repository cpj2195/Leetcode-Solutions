#include"essentials.cpp"


bool are_anagrams(string s1, string s2)
{


int count1[256]={0};
int count2[256]={0};



for(int i=0;i<s1.length();i++){
    // cout<<s1[i]<<" "<<coun;
count1[s1[i]-'a']++;
cout<<s1[i]<<" "<<count1[s1[i]-'a']<<endl;



}
cout<<endl<<endl;
for(int i=0;i<s2.length();i++){
count2[s2[i]-'a']++;
cout<<s2[i]<<" "<<count2[s2[i]-'a']<<endl;


}







for(int i=0;i<26;i++){


    if(count1[i]!=count2[i]){
        cout<<count1[i]<<endl;
        return false;
    }
    
   
}

return true;


// return true;









}

int main()
{

string s1="cccccchanderprabh";
string s2="prachanbhder";


cout<<are_anagrams(s1,s2);

return 1;



}