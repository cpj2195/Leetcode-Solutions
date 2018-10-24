#include"essentials.cpp"


string frequencySort(string S) {
        unordered_map<char,int>mp1;
        for(int i=0;i<S.length();i++){
            mp1[S[i]]++;
        }
        
        sort(S.begin(),S.end(),[&](char a,char b){
            
            return(mp1[a]>mp1[b] || mp1[a] == mp1[b] && a < b);
            
        });
        return S;
        
    }



int main(){



    string S="2a554442f544asfasssffffasss";
    cout<<reorganizeString(S);
    return 1;
}