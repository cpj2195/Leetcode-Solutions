#include"essentials.cpp"

 vector<int> findAnagrams(string s, string p) {
        
        vector<int>v1;
        
        map<char,int>mp1;
        map<char,int>mp2;
        if(p.length()>s.length()){
            return v1;
        }
        for(int i=0;i<p.length();i++){
            mp1[s[i]]++;
            mp2[p[i]]++;
            
        }
        if(mp1==mp2){
            v1.push_back(0);
        }
        for(int i=p.size();i<s.size();i++){
            
            cout<<s[i]<<endl;
            
            mp1[s[i]]++;
            // cout<<s[i-p.size()]<<endl;
            mp1[s[i-p.size()]]--;
            
            // for(auto it:mp1){
            //     for(auto it1:mp2){

            //         if(it.first==it1.first){

            //         }
            //     }
               
            // }
            int count=0;
            for(auto it:mp1){
                // cout<<it.first<<" "<<it.second<<endl;
                for(auto it1:mp2){

                        if(it.first==it1.first){
                            if(it.second==it1.second){
                                count++;
                            }

                        }

                }
            }

            if(count==p.length()){
                
                v1.push_back(i-p.size()+1);
            }
            
        }
        return v1;
        
        
        
        
}





int main(){
string s="cbaebabacd";
string t="abc";
vector<int>v1=findAnagrams(s,t);
print_vector(v1);
return 1;



}   