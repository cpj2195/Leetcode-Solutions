class Solution {
public:
    string get_morse(string test){

string array[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
int size=26;
string result="";
for(int i=0;i<test.length();i++){
result+=array[(int)test[i]-97];
}
return result;

}
    int uniqueMorseRepresentations(vector<string>& words) {
        
        set<string>s1;
        for(auto it=0;it<words.size();it++){
            string result="";
            result+=get_morse(words[it]);
            s1.insert(result);
            
            
        }
        return s1.size();
        
    }
};