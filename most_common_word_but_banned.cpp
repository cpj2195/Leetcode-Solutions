#include"essentials.cpp"




string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string, int>m;
        for(int i = 0; i < paragraph.size();){
            string s = "";
            while(i < paragraph.size() && isalpha(paragraph[i])) s.push_back(tolower(paragraph[i++]));
            // cout<<s/<<endl;
            while(i < paragraph.size() && !isalpha(paragraph[i])) i++;
            m[s]++;
        }
        for(auto x: banned) m[x] = 0;
        string res = "";
        int count = 0;
        for(auto x: m)
            {
                if(x.second>count){
                    res=x.first;
                    count=x.second;
                }
            }
            // if(x.second > count) res = x.first, count = x.second;
        return res;  
    }


int main(){
string paragraph="Bob hit a ball, the hit BALL flew far after it was hit.";
vector<string>banned;
banned.push_back("hit");
cout<<mostCommonWord(paragraph,banned)<<endl;
// cout<<mostCommonWord(paragraph,banned)<<endl;
return 1;




}

