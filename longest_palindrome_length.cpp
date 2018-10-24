#include"essentials.cpp"

int longestPalindrome(string s) {
        map<char,int>mp1;
        set<char> s1;
        // set<char>::iterator it;
        int count=0;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            cout<<s[i]<<" "<<mp1[s[i]]<<endl;
            s1.insert(s[i]);
            
        }
        cout<<endl<<endl;
        
        bool flag=true;
        for(auto it:s1)
        {
            
             if(mp1[it]%2==0)
            {
                cout<<"2 "<<it<<endl;
                count+=mp1[it];
            }
            else if (mp1[it]%2!=0)
            {   
                cout<<"1 "<<it<<endl;
                count+=mp1[it]-1;
                flag=false;
            }
            // else if(flag==true && mp1[it]==1){
            //     cout<<"3 "<<it<<endl;
            //     count=count+1;
            //     flag=false;
            // }
            
        }

        if(!flag){
            count++;
        }

        return count;
        
     
    }
    


int main(){

string test="abbbccccdd";

cout<<longestPalindrome(test)<<endl;
return 1;
}