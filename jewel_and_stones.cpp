#include"essentials.cpp"

int numJewelsInStones(string J, string S) {
        map<char,int>m1;
        set<char>m2;
       
        int count=0;
       
        for(int x=0;x<J.length();x++ ){
            m1[J[x]]++;
        }
        for(int x=0;x<S.length();x++){

                if(m1.find(S[x]) != m1.end()){
                    count++;
                }
        }
        return count;
    }

int main(){

string J="aA";
string S="aAAbbbb";
cout<<numJewelsInStones(J,S)<<endl;
return 1;

}