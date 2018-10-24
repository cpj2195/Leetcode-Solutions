#include"essentials.cpp"

bool isIsomorphic(string s, string t) {
        map<char,set<char> >mp1;
        if(s.length()!=t.length()){
            return false;
        }
       
        for(int i=0;i<s.length();i++){
            {
                mp1[s[i]].insert(t[i]);
            }
        }
        
        // for(auto it:mp1){
        //     cout<<it.first<<endl;
        //     for(auto it1:it.second){
        //         cout<<it1<<endl;
        //     }
        // }
        bool flag =true;
        bool flag1 =true;
        
            for(auto it:mp1){

                if(it.second.size()!=1){
                    flag=false;
                }
            }

       if(flag==false){
           return false;
       }
        else{

            for(auto it=mp1.begin();it!=prev(mp1.end());it++){
                // cout<<it->second[0]<<endl;
                set<char>set1=it->second;
                for(auto it1=next(it);it1!=mp1.end();it1++){
                    set<char>set2=it1->second;
                    if(set1==set2){
                        flag1=false;
                    }
                }
            }
            
            }


        
      
        return (flag && flag1);
    }

int main(){

string s="ab";
string t="aa";
cout<<isIsomorphic(s,t)<<endl;
return 1;

}